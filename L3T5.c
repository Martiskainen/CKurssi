#include <stdio.h>
#include <stdlib.h>

int kirjoittaminen(char *kirjoitettava, int lahto)
{
    int i;
    int luku;
    FILE *tiedosto;

    if ((tiedosto = fopen(kirjoitettava, "wb")) == NULL)
         return (0);
    srand(lahto);
    for (i = 0; i < 20; i++)
    {
        luku = (rand() % 1000);
        fwrite(&luku, 4, 1, tiedosto);
    }
    fclose(tiedosto);

    return (1);
}

int lukeminen(char *kirjoitettava)
{
    int i;
    int luku;
    FILE *tiedosto;

    if ((tiedosto = fopen(kirjoitettava, "rb")) == NULL)
        return (0);
    for (i = 0; i < 20; i++)
    {
        fread(&luku, 4, 1, tiedosto);
        printf("%d ", luku);
    }
    //printf("%d", luku);
    fclose(tiedosto);

    return (1);
}

int main()
{
    char kirjoitettava[30];
    int lahto;

    printf("Anna käsiteltävän tiedoston nimi: ");
    scanf("%s", kirjoitettava);
    printf("Anna satunnaisluvuille lähtöarvo: ");
    scanf("%d", &lahto);
    if (!(kirjoittaminen(kirjoitettava, lahto)))
    {
        perror("Tiedoston avaaminen epäonnistui, lopetetaan: Permission denied");
        exit(0);
    }
    printf("Tiedoston kirjoitus onnistui.\nTiedostossa on seuraavat luvut:\n");
    if (!(lukeminen(kirjoitettava)))
    {
        perror("Tiedoston avaaminen epäonnistui, lopetetaan:");
        exit(0);
    }
    printf("\nTiedoston lukeminen onnistui.\nKiitos ohjelman käytöstä.");

    return (0);
}