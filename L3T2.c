#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int kirjoitus(char *tienimi)
{
    char nimi[30];
    FILE *tiedosto;

    tiedosto = fopen(tienimi, "a");
    printf("Anna lisättävä nimi: ");
    scanf("%s", nimi);
    fprintf(tiedosto, "%s\n", nimi);
    fclose(tiedosto);
    printf("Nimi lisätty tiedostoon.\n\n");
    return(0);
}

int lukeminen(char *tienimi)
{
    char luettava[30];
    FILE *tiedosto;

    tiedosto = fopen(tienimi, "r");
    if((tiedosto=fopen(tienimi,"r"))== NULL)
    {
        perror("Tiedoston avaaminen epäonnistui, lopetetaan: No such file or directory");
        exit(0);
    }
    printf("Tiedostossa olevat nimet:\n");
    while (fgets(luettava, 30, tiedosto) != NULL)
        printf("%s", luettava);
    printf("Tiedosto luettu ja tulostettu.\n\n");
    fclose(tiedosto);

    return(0);
}

int valikko(char *tienimi)
{
    int valinta = 3;
    
    while (valinta != 0)
    {
        printf("Valitse alla olevista valinnoista\n1) Lisää uusi nimi\n2) Tulosta nimet\n0) Lopeta\nAnna valintasi: ");
        scanf("%d", &valinta);
        if (valinta == 1)
            kirjoitus(tienimi);
        else if (valinta == 2)
            lukeminen(tienimi);
        else if (valinta == 0)
            printf("Kiitos ohjelman käytöstä.");
    }
    return(0);
}

int main()
{
    char tienimi[30];
    printf("Tämä ohjelma lisää nimiä tiedostoon ja lukee ne.\nAnna käsiteltävän tiedoston nimi: ");
    scanf("%s", tienimi);
    valikko(tienimi);
    return(0);
}