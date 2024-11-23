#include <stdio.h>
#include <stdlib.h>

typedef struct lukutietue
{
    int luku;
    struct lukutietue *seuraava;
} tietue;

tietue *alku = NULL, *loppu = NULL, *osoitin = NULL, *uusi = NULL; 


int main()
{
    int syote = 1;
    printf("Anna listan luvut.\n");
    while (syote != 0)
    {
        printf("Anna positiivinen kokonaisluku, 0 lopettaa: ");
        scanf("%d", &syote);
        if (syote != 0)
        {
            if ((uusi = (tietue*)malloc(sizeof(tietue))) == NULL)
            {
                perror("Muistin varaus epäonnistui, lopetetaan.");
                exit(0);
            }
            uusi->luku = syote;
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
    printf("Listassa on seuraavat luvut: ");
    osoitin = alku;
    while (osoitin != NULL)
    {   
        if (osoitin == loppu)
        {
            printf("%d ", osoitin->luku);
            osoitin = osoitin->seuraava;
        }
        else
        {
            printf("%d ", osoitin->luku);
            osoitin = osoitin->seuraava;
        }
    }
    printf("\nKiitos ohjelman käytöstä.");
    osoitin = alku;
    while (osoitin != NULL)
    {
        alku = osoitin->seuraava;
        free(osoitin);
        osoitin = alku;
    }
    return (0);
}