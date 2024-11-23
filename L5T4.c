#include <stdio.h>
#include <stdlib.h>

int tulosta(int taulukkokoko, int **passaaja)
{
    int i;
    if (taulukkokoko == 0)
        printf("Taulukko on tyhjä.\n");
    else
    {
        printf("Taulukon alkiot ovat: ");
        for (i = 0; i < taulukkokoko - 1; i++)
            printf("%d ", passaaja[0][i]);
        printf("%d \n", passaaja[0][taulukkokoko - 1]);
    }

    return (0);
}

int muuta(int taulukkokoko, int **passaaja)
{
    int i;

    if ((passaaja[0] = (int*)malloc(sizeof(passaaja[0] + 1) * sizeof(int))) == NULL)
        {
            perror("Muistin varaus epäonnistui.\n");
            exit(0);
        }

    for (i = 0; i < taulukkokoko; i++)
        passaaja[0][i] = i;

    return (0);
}

int main()
{
    int valinta = 5;
    int taulukkokoko = 0;
    int testikoko = 0;
    int *taulukko = NULL;
    int *passaaja[1];

    while (valinta != 0)
    {
        printf("1) Tulosta taulukon alkiot\n2) Muuta taulukon kokoa\n0) Lopeta\nAnna valintasi: ");
        scanf("%d", &valinta);
        if (valinta == 1)
            tulosta(taulukkokoko, passaaja);
        else if (valinta == 2)
        {
            printf("Anna taulukon uusi koko: ");
            scanf("%d", &testikoko);
            if (testikoko < 0)
                printf("Taulukon koko ei voi olla negatiivinen.\n");
            else
            {
                taulukkokoko = testikoko;
                passaaja[0] = taulukko;
                muuta(taulukkokoko, passaaja);
            }
        }
        else if (valinta == 0)
        {
            printf("Muisti vapautettu.\nKiitos ohjelman käytöstä.");
            free(taulukko);
        }
        else 
            printf("Tuntematon valinta, yritä uudestaan.\n");
    }
    return (0);
}