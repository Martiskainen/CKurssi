#include <stdio.h>
int main(void)
{
    int luku;
    int luku2;
    int kerto;
    int miinus;
    int jaannos;

    printf("Anna ensimmäinen kokonaisluku: ");
    scanf("%d", &luku);
    printf("Anna toinen kokonaisluku: ");
    scanf("%d", &luku2);
    kerto = (luku + luku2) * 2;
    miinus = (luku / luku2) - 3;
    printf("(%d + %d) * 2 = %d\n", luku, luku2, kerto);
    printf("(%d / %d) - 3 = %d\n", luku, luku2, miinus);
    jaannos = (++luku) % (--luku2);
    printf("%d %% %d = %d\n", luku, luku2, jaannos);
    return (0);
}