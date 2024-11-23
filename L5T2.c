#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int tarkistaSyote(char *lukujono)
{
    int i = 0;

    while (i < strlen(lukujono))
    {
        if (!isdigit(lukujono[i]) || atoi(lukujono) < 1)
        {
            printf("Parametri ei ollut positiivinen kokonaisluku.\nKiitos ohjelman käytöstä.");
            exit(0);
        }
        i++;
    }

    return (atoi(lukujono));
}

char *varaaMuisti(int koko)
{
    char *taulukkopointteri = NULL;
    int muistiataulukkoon = koko + 1; 

    if ((taulukkopointteri = (char *)malloc(muistiataulukkoon)) == NULL)
    {
        perror("Muistivaraus epäonnistui.\nKiitos ohjelman käytöstä.");
        exit(0);
    }
    printf("Muistin varaus onnistui.\nTaulukossa on tilaa %d alkiolle.\n", koko);

    return(taulukkopointteri);
}

char *taytaTaulukko(char *taulukkopointteri, char *lukujono)
{
    int luku = 0;
    int koko = atoi(lukujono);
    int i = 0;

    while (i < koko)
    {
        printf("Anna %d. luku: ", i + 1);
        scanf("%d", &luku);
        taulukkopointteri[i++] = luku;
    }
    printf("Taulukko täytetty.\nTaulukossa on luvut: ");
    for (i = 0; i < koko - 1; i++)
        printf("%d ", taulukkopointteri[i]);
    printf("%d \nTaulukko tulostettu.\n", taulukkopointteri[i]);
    return(taulukkopointteri);
}

int vapautaMuisti(char *taulukkopointteri)
{
    free(taulukkopointteri);
    taulukkopointteri = NULL;
    printf("Muisti vapautettu.\nKiitos ohjelman käytöstä.");
    return (0);
}

int main(int argc, char *argv[])
{
    if (argc < 2)
        printf("Et antanut taulukon kokoa.\nKiitos ohjelman käytöstä.");
    else
        vapautaMuisti(taytaTaulukko(varaaMuisti(tarkistaSyote(argv[1])), argv[1]));
    return (0);
}