#include <stdio.h>
#include <stdlib.h>
#include "L7T1_io.h"

int main()
{
    int lista[LKM];

    printf("Askelanalyysi\nListan askeleet: ");
    lueAskeleetListaan(lista, LKM);
    tulostaLista(lista, LKM);
    
    return(0);
}