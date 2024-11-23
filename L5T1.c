#include <stdio.h>
#include <stdlib.h>

int muutos(int luku)
{
    return (luku * luku);
}

int main(int argc, char **argv)
{
    if (argc == 1)
        printf("Et antanut lukua!\nKiitos ohjelman käytöstä.");
    else
    {
        int luku = atoi(argv[1]);
        printf("Luku on %d.\n", luku);
        luku = muutos(luku);
        printf("Luvun neliö on %d.\nKiitos ohjelman käytöstä.", luku);
    }
    return (0);
}