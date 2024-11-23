#include <stdio.h>
#include <stdlib.h>
#include "L7T3_io.h"
#include "L7T3_muisti.h"

void tulostaNumerot(int *lista, int maara)
{
    int i = 0;
    
    for(i = 0; i < maara; i++)
        printf("%d ", lista[i]);
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