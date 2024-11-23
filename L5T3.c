#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct HENKILO
{
    char nimi[3][30];
    int ika[3];
}HENKILO;
struct HENKILO h;

int kopioi()
{
    char *muistipaikka = NULL;
    int muistikoko = (strlen(h.nimi[0]) + 1) * sizeof(char);
    if ((muistipaikka = (char*)malloc(muistikoko)) == NULL)
    {
        perror("Muistin varaus epäonnistui.\nKiitos ohjelman käytöstä.");
        exit(0);
    }
    strcpy(muistipaikka, h.nimi[0]);
    strcpy(h.nimi[2], muistipaikka);
    h.ika[2] = h.ika[0];
    free(muistipaikka);
    printf("Kopioinnin jälkeen tietueiden tiedot ovat samoja.\nKopioinnin jälkeen tietueiden osoitteet eivät ole samoja.\nMuisti vapautettu.\nKiitos ohjelman käytöstä.");
    return (0);
}

int vertaa()
{
    if (strcmp(h.nimi[0], h.nimi[1]) != 0 || h.ika[0] != h.ika[1])
        printf("Annetut tiedot eivät ole samoja.\n");
    else
        printf("Annetut tiedot ovat samoja.\n");
    return (0);
}

int main()
{
    char nimi[30];
    int ika;

    printf("Anna ensimmäisen henkilön etunimi: ");
    scanf("%s", nimi);
    strcpy(h.nimi[0], nimi);
    printf("Anna ensimmäisen henkilön ikä: ");
    scanf("%d", &ika);
    h.ika[0] = ika;
    printf("Anna toisen henkilön etunimi: ");
    scanf("%s", nimi);
    strcpy(h.nimi[1], nimi);
    printf("Anna toisen henkilön ikä: ");
    scanf("%d", &ika);
    h.ika[1] = ika;
    vertaa();
    kopioi();
    return (0);
}