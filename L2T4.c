#include <stdio.h>
int main(void)
{
    float luku = 0;
    float tulos = 0;
    int valinta = 0;

    printf("Anna liukuluku: ");
    scanf("%f", &luku);
    printf("\nValikko\n1) Kerro piin arvo luvulla %.3f.\n2) Jaa piin arvo luvulla %.3f.\nValitse: ", luku, luku);
    scanf("%d", &valinta);
    switch (valinta)
    {
        case 1:
            tulos += 3.142 * luku;
            printf("\nPii * %.3f = %.3f.", luku, tulos);
            break;
        case 2:
            tulos += 3.142 / luku;
            printf("\nPii / %.3f = %.3f.", luku, tulos);
            break;
        default:
            printf("\nTuntematon valinta.");
            break;
    }
    return (0);
}