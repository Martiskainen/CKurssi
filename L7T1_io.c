#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "L7T1_io.h"

int lueAskeleetListaan(int *lista, int koko)
{
    FILE *tiedosto;
    int luku = 0;
    int i = 0;
    char rivi[50];
    char *rivijako;

    tiedosto = fopen("askeldata.txt", "r");
    while (i < koko)
    {
        fscanf((tiedosto), "%s", rivi);
        rivijako = strtok(rivi, ":");
        rivijako = strtok(NULL, ":");
        luku = atoi(rivijako);
        lista[i++] = luku;
    }
    fclose(tiedosto);

    return(0);
}

void tulostaLista(int *lista, int koko)
{
    int i = 0;
    int summa = 0;
    
    while (i < koko)
    {
        printf("%d ", lista[i]);
        summa += lista[i++];
    }
    printf("\nAskelia yhteensä: %d\nKiitos ohjelman käytöstä.", summa);
}