#include <stdio.h>
#include <string.h>

struct kirja
{
    char nimi[50];
    int vuosi;
    int paikka;
};

int main()
{
    struct kirja Kirja;
    printf("Anna kirjan nimi: ");
    fgets(Kirja.nimi, 50, stdin);
    Kirja.nimi[strlen(Kirja.nimi) - 1] = '\0';
    printf("Anna kirjan painovuosi: ");
    scanf("%d", &(Kirja.vuosi));
    printf("Anna kirjan hyllypaikka: ");
    scanf("%d", &(Kirja.paikka));
    printf("Kirjan nimi on '%s', painovuosi %d ja hyllypaikka %d.\nKiitos ohjelman käytöstä.", Kirja.nimi, Kirja.vuosi, Kirja.paikka);
    return (0);
}