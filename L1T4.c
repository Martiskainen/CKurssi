#include <stdio.h>
int main(void)
{
    char merkki[2];
    char sana[22];

    printf("Anna merkki: ");
    scanf("%s", merkki);
    printf("Annoit merkin '%s'.\n", merkki);
    printf("Anna korkeintaan 20 merkkiä pitkä merkkijono: ");
    scanf("%s", sana);
    printf("Annoit merkkijonon '%s'.", sana);
    return (0);
}