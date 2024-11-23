#include <stdio.h>
#include <stdlib.h>

void vapautaMuisti(int *lista)
{
    free(lista);
}

int tarkistaNumero(int *lista, int arvottuluku, int maara)
{
    int i = 0;

    while (i < maara)
    {
        if(lista[i++] == arvottuluku)
            return(1);
    }

    return(0);
}

void arvoNumerot(int *lista, int maara)
{
    int i = 0;
    int arvottuluku = 0;

    while(i < maara)
    {
        arvottuluku = rand() % 38;
        if (tarkistaNumero(lista, arvottuluku, maara) != 1)
        {
            lista[i] = arvottuluku;
            i++;
        }
    }
}

void tulostaNumerot(int *lista, int maara)
{
    int i = 0;
    
    for(i = 0; i < maara; i++)
        printf("%d ", lista[i]);
}

int* varaaMuistiaNumeroille(int maara)
{
    int *lista;

    lista = (int*)malloc(maara * sizeof(int));
    
    return(lista);
}

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
    lista2 = varaaMuistiaNumeroille(lisanumerotmaara);
    arvoNumerot(lista2, lisanumerotmaara);
    tulostaNumerot(lista2, lisanumerotmaara);
    vapautaMuisti(lista);
    vapautaMuisti(lista2);
    printf("\nKiitos ohjelman käytöstä.");

    return(0);
}