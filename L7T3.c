#include <stdio.h>
#include <stdlib.h>
#include "L7T3_io.h"
#include "L7T3_muisti.h"

int main()
{
    int numerotmaara = 2;
    int lisanumerotmaara = 1;
    int *lista;
    int *lista2;

    srand(1);
    printf("Lottoarvonta\nKuinka monta numeroa arvotaan: ");
    scanf("%d", &numerotmaara);
    printf("Kuinka monta lisänumeroa arvotaan: ");
    scanf("%d", &lisanumerotmaara);
    printf("\nArvottiin seuraavat numerot ja lisänumerot.\nNumerot: ");
    lista = varaaMuistiaNumeroille(numerotmaara);
    arvoNumerot(lista, numerotmaara);
    tulostaNumerot(lista, numerotmaara);
    printf("\nLisänumerot: ");
    if(lisanumerotmaara != 3)
    {
        lista2 = varaaMuistiaNumeroille(lisanumerotmaara);
        arvoNumerot(lista2, lisanumerotmaara);
        tulostaNumerot(lista2, lisanumerotmaara);
        vapautaMuisti(lista2);
    }
    else
    {
        arvoNumerot(lista, lisanumerotmaara);
        tulostaNumerot(lista, lisanumerotmaara);
    }
    vapautaMuisti(lista);
    printf("\nKiitos ohjelman käytöstä.");

    return(0);
}