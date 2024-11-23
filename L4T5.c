#include <stdio.h>

int laske(int luku)
{
    if (luku <= 1)
        return luku;
    else
        return (laske(luku - 1) + laske(luku - 2));
}

int main()
{
    int luku;
    int fibo;
    printf("Anna luku, jolle lasketaan Fibonaccin luku: ");
    scanf("%d", &luku);
    fibo = laske(luku);
    printf("Luvun %d Fibonaccin luku on %d.\nKiitos ohjelman käytöstä.", luku, fibo);

    return (0);
}