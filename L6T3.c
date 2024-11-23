#include <stdio.h>
#include <stdlib.h>

typedef struct taulukko
{
    int luku;
    struct taulukko *seuraava;
} t;

t *uusi = NULL, *alku = NULL, *loppu = NULL, *osoitin = NULL;

void muistinvapautus()
{
    osoitin = alku;
    while (osoitin != NULL)
    {
        alku = osoitin->seuraava;
        free(osoitin);
        osoitin = alku;
    }
}

void muistinvaraus()
{
    if ((uusi = (t*)malloc(sizeof(t))) == NULL)
    {
        printf("Muistin varaus epäonnistui, lopetetaan.");
        exit(0);
    }
}

void lisaa(int syote)
{
    int i = 0;

    while (i < syote)
    {
        muistinvaraus();
        uusi->luku = i++;
        uusi->seuraava = NULL;
        if (alku == NULL)
        {
            alku = uusi;
            loppu = uusi;
        }
        else
        {
            loppu->seuraava = uusi;
            loppu = uusi;
        }
    }
}

void muuta()
{
    int syote = 0;

    if (alku != NULL)
        muistinvapautus();
    printf("Anna listan uusi pituus: ");
    scanf("%d", &syote);
    if (syote < 0)
        printf("Listan pituus ei voi olla negatiivinen.\n");
    else if (syote > 0)
        lisaa(syote);
    else
        printf("Tuntematon valinta, yritä uudestaan.\n");
}

void tulosta()
{
    osoitin = alku;
    if (osoitin == NULL)
        printf("Lista on tyhjä.");
    else
        printf("Listassa on seuraavat luvut: \n");
    while (osoitin != NULL)
    {
        printf("%d ", osoitin->luku);
        osoitin = osoitin->seuraava;
    }
    printf("\n");
}

void valikko()
{
    int syote = 3;

    while (syote != 0)
    {
        printf("1) Tulosta listan alkiot\n2) Muuta listan pituutta\n0) Lopeta\nAnna valintasi: ");
        scanf("%d", &syote);
        if (syote == 1)
            tulosta();
        else if (syote == 2)
            muuta();
        else if (syote != 0)
            printf("Tuntematon valinta, yritä uudestaan.\n");
    }
}

int main()
{
    valikko();
    muistinvapautus();
    printf("Kiitos ohjelman käytöstä.");
    return (0);
}