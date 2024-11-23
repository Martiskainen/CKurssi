#include<stdio.h>
#include<string.h>

int nimivertailu(char *nimi, char *nimi2)
{
    if (strcmp(nimi, nimi2) == 0)
        printf("Merkkijonona '%s' ja '%s' ovat yhtä suuria.", nimi, nimi2);
    else if(strcmp(nimi, nimi2) < 0)
        printf("Merkkijonona '%s' on suurempi ja '%s' pienempi.", nimi2, nimi);
    else
        printf("Merkkijonona '%s' on suurempi ja '%s' pienempi.", nimi, nimi2);
    return(0);
}

int desivertailu(float desi, float desi2)
{
    if (desi == desi2)
        printf("Luvut %.2f ja %.2f ovat yhtä suuria.", desi, desi2);
    else if(desi < desi2)
        printf("Luku %.2f on suurempi ja  %.2f pienempi.", desi2, desi);
    else
        printf("Luku %.2f on suurempi ja %.2f pienempi.", desi, desi2);
    return(0);
}

int kokovertailu(int koko, int koko2)
{
    if (koko == koko2)
        printf("Luvut %d ja %d ovat yhtä suuria.", koko, koko2);
    else if(koko < koko2)
        printf("Luku %d on suurempi ja %d pienempi.", koko2, koko);
    else
        printf("Luku %d on suurempi ja %d pienempi.", koko, koko2);
    return(0);
}

int main()
{
    int koko;
    int koko2;
    float desi;
    float desi2;
    char nimi[20];
    char nimi2[20];

    printf("Anna kaksi kokonaislukua:\nLuku 1: ");
    scanf("%d", &koko);
    printf("Luku 2: ");
    scanf("%d", &koko2);
    kokovertailu(koko, koko2);
    printf("\nAnna kaksi desimaalilukua:\nLuku 1: ");
    scanf("%f", &desi);
    printf("Luku 2: ");
    scanf("%f", &desi2);
    desivertailu(desi, desi2);
    printf("\nAnna kaksi nimeä:\nNimi 1: ");
    scanf("%s", nimi);
    printf("Nimi 2: ");
    scanf("%s", nimi2);
    nimivertailu(nimi, nimi2);
    printf("\nKiitos ohjelman käytöstä.\n");

    return(0);
}