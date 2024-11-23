#include <stdio.h>
#include <stdlib.h>

int lisaa(int *lista)
{
    int i = 0;

    while (i < 10)
    {
        lista[i] = i;
        i++;
    }
    return(0);
}

int main()
{
    int i = 0;
    int lista[10];

    i = lisaa(lista);
    while (i < 10)
    {
        printf("%d ", lista[i++]);
    }   
    return(0);
}