#include <stdio.h>
#include <stdlib.h>
#include "L7T3_io.h"
#include "L7T3_muisti.h"

void vapautaMuisti(int *lista)
{
    free(lista);
}

int* varaaMuistiaNumeroille(int maara)
{
    int *lista;

    if ((lista = (int*)malloc(maara * sizeof(int))) == NULL )
    {
        perror("Muistin varaus epäonnistui, lopetetaan.");
        exit(0);
    }

    return(lista);
}