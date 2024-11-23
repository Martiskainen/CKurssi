#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ajoneuvo
{
    char nimi[30];
    char vuosi[10];
    struct ajoneuvo *seuraava;
} tietue;

tietue *alku = NULL, *loppu = NULL, *uusi = NULL, *ptr = NULL; 

void vapautamuisti()
{
    ptr = alku;
    while (ptr != NULL)
    {
        alku = ptr->seuraava;
        free(ptr);
        ptr = alku;
    }
    printf("Muisti vapautettu.\n");
}

void tulosta()
{
    int i = 1;
    ptr = alku;
    if (ptr == NULL)
        printf("Ajoneuvoja ei löytynyt.\n");
    while (ptr != NULL)
    {
            printf("%d. ajoneuvo: %s vuosimalli %s.\n", i++, ptr->nimi, ptr->vuosi);
            ptr = ptr->seuraava;
    }
}

void lisaalistaan(char *syote)
{

    FILE *tiedosto;
    char rivi[50];

    printf("Luetaan tiedot tiedostosta %s.\n", syote);
    if ((tiedosto = fopen(syote, "r")) == NULL)
    {
        printf("Tiedoston avaus epäonnistui.\nKiitos ohjelman käytöstä.");
        exit(0);
    }
    while (fgets(rivi, 50, tiedosto) != NULL)
    {
        if (rivi[0] != '\n')
        {
            if ((uusi = (tietue*)malloc(sizeof(tietue))) == NULL)
            {
                printf("Muistin varaus epäonnistui, lopetetaan.");
                exit(0);
            }
            if (rivi[strlen(rivi) - 1] == '\n')
                rivi[strlen(rivi) - 1] = '\0';
            strcpy(uusi->nimi, strtok(rivi, " "));
            strcpy(uusi->vuosi, strtok(NULL, " "));
            uusi->seuraava = NULL;
            if (alku == NULL)
            {
                alku = uusi;
                loppu = uusi;
            }
            else
            {
                loppu->seuraava = uusi;
                loppu = uusi;
            }
        }
    }
    fclose(tiedosto);
    printf("Tiedot luettu linkitettyyn listaan.\n");
}

int main(int argc, char **argv)
{
    if (argc == 1)
        printf("Et antanut tiedoston nimeä.\n");
    else
    {
        lisaalistaan(argv[1]);
        tulosta();
        vapautamuisti();
    }
    printf("Kiitos ohjelman käytöstä.");

    return (0);
}