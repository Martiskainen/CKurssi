#include <stdio.h>
int main(void)
{
    int eka = 0;
    int toka = 0;
    int valinta = 0;
    int tulos = 0;

    printf("Anna kaksi kokonaislukua: ");
    scanf("%d %d", &eka, &toka);
    printf("\nValikko\n1) Summaa luvut yhteen.\n2) Kerro luvut keskenään.\nValitse: ");
    scanf("%d", &valinta);
    if (valinta == 1)
    {
        tulos = eka + toka;
        printf("\nLuvut laskettiin yhteen. Tulos = %d.", tulos);
    }
    else if (valinta == 2)
    {
        tulos = eka * toka;
        printf("\nLuvut kerrottiin keskenään. Tulos = %d.", tulos);
    }
    else
        printf("\nTuntematon valinta.");
    return (0);
}