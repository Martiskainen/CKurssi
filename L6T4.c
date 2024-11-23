#include <stdio.h>
#include <stdlib.h>

typedef struct lista
{
    int luku;
    struct lista *seuraava;
} li;

li *uusi = NULL, *alku = NULL, *loppu = NULL, *osoitin = NULL;

void vapautamuisti()
{
    osoitin = alku;
    while (osoitin != NULL)
    { 
        alku = osoitin->seuraava;
        free(osoitin);
        osoitin = alku;
    }
}

void varaamuisti()
{
    if ((uusi = (li*)malloc(sizeof(li))) == NULL)
    {
        printf("Muistin varaus epäonnistui, lopetetaan.");
        exit(0);
    }
}

void tulosta()
{
    osoitin = alku;
    while (osoitin != NULL)
    {
        printf("%d ", osoitin->luku);
        osoitin = osoitin->seuraava;
    }
    printf("\n");
}

void lisaaloppuun(int j)
{
    varaamuisti();
    if (alku == NULL)
    {
        uusi->luku = j;
        uusi->seuraava = NULL;
        alku = uusi;
        loppu = uusi;
    }
    else
    {
        uusi->luku = j;
        uusi->seuraava = NULL;
        loppu->seuraava = uusi;
        loppu = uusi; 
    }
    tulosta();
}

int luo(int viimeinen)
{
    int i = 1;
    int pituus = 0;

    printf("Anna listan pituus: ");
    scanf("%d", &pituus);
    if (pituus > 0)
    {
        if (loppu != NULL)
            vapautamuisti();
        while (i++ <= pituus)
        {
            varaamuisti();
            uusi->luku = ++viimeinen;
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
    tulosta();
    
    return (viimeinen);
}

void valikko()
{
    int viimeinen = 0;
    int syote = 7;
    printf("Tämä ohjelma hallitsee listaa ja sen alkioita.\n");
    while (syote != 0)
    {
        printf("1) Luo lista\n2) Lisää alkio listan loppuun\n3) Lisää alkio listan keskelle\n");
        printf("4) Tyhjennä lista\n5) Poista alkio listasta\n6) Tulosta lista\n0) Lopeta\nAnna valintasi: ");
        scanf("%d", &syote);
        if (syote == 1)
            viimeinen = luo(viimeinen);
        else if (syote == 2)
            lisaaloppuun(++viimeinen);
        else if (syote == 4)
            vapautamuisti();
        else if (syote == 6)
            tulosta();
        else if (syote == 0)
            vapautamuisti();
        else
            printf("Tuntematon valinta, yritä uudestaan.\n");
    }
}

int main()
{
    valikko();
    printf("Kiitos ohjelman käytöstä.");
}