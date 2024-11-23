#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "L7T2_lista.h"

li *uusi = NULL, *alku = NULL, *loppu = NULL, *osoitin = NULL, *edellinen = NULL;

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
    if (alku != NULL)
        printf("\n");
}

void poistakeskelta()
{
    int syote = 0;
    int i = 0;

    printf("Monesko alkio poistetaan: ");
    scanf("%d", &syote);
    varaamuisti();
    uusi->luku = syote; 
    uusi->seuraava = NULL;
    osoitin = alku;
    if (osoitin == NULL)
        printf("Lista on tyhjä.\n");
    else
    {
        if (syote == 1)
        {
            alku = osoitin->seuraava;
        }
        else
        {
            for (i = 1; osoitin != NULL && i < syote; i++) {
                edellinen = osoitin;
                osoitin = osoitin->seuraava;
            }
            if (osoitin != NULL)
            {
                edellinen->seuraava = osoitin->seuraava;
            }
        }
        free(osoitin);
        tulosta();
    }
}

void lisaakeskelle(int isompi)
{
    int syote = 0;
    int i = 1;

    printf("Monenneksi solmuksi alkio lisätään: ");
    scanf("%d", &syote);
    varaamuisti();
    uusi->luku = isompi;
    uusi->seuraava = NULL;
    osoitin = alku;
    if (syote == 1)
    {
        uusi->seuraava = alku;
        alku = uusi;
    }
    else
    {
        while (i++ < syote - 1)
        {
            osoitin = osoitin->seuraava;
        }
        
        uusi->seuraava = osoitin->seuraava;
        osoitin->seuraava = uusi;
    }        
    tulosta();
}

void lisaaloppuun(int isompi)
{
    varaamuisti();
    if (alku == NULL)
    {
        uusi->luku = isompi;
        uusi->seuraava = NULL;
        alku = uusi;
        loppu = uusi;
    }
    else
    {
        uusi->luku = isompi;
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
        else if (syote == 3)
            lisaakeskelle(++viimeinen);
        else if (syote == 4)
            vapautamuisti();
        else if (syote == 5)
            poistakeskelta();
        else if (syote == 6)
            tulosta();
        else if (syote == 0)
            vapautamuisti();
        else
            printf("Tuntematon valinta, yritä uudestaan.\n");
    }
}
