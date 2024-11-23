#include<stdio.h>

int aliohjelma(int luku, int potenssi)
{
    int tulos = luku;
    int i = 0;

    if (potenssi == 0)
    {
        return (1);
    }

    while (++i < potenssi)
    {
        tulos = tulos * luku;
    }

    return (tulos);
}

int main()
{
    int potenssi;
    int luku;
    int tulos;

    printf("Ohjelma laskee luvun potenssin.\nAnna kokonaisluku, jonka haluat korottaa potenssiin: ");
    scanf("%d", &luku);
    printf("Anna potenssi, jonka haluat laskea: ");
    scanf("%d", &potenssi);
    tulos = aliohjelma(luku, potenssi);
    printf("%d ^ %d = %d.\nKiitos ohjelman käytöstä.", luku, potenssi, tulos);

    return(0);
}