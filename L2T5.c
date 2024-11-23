#include <stdio.h>
int main(void)
{
    char valinta = 5;
    char merkit[200];
    char uusi[200];
    int i = 0;
    int j;
    int k = 0;
    merkit[0] = '\0';
    while (valinta != '0') 
    {
        printf("\nValikko\n1) Lisää uusi merkki\n2) Tyhjennä merkkijono\n3) Tulosta merkkijono\n0) Lopeta\nValintasi: ");
        scanf(" %c", &valinta);
        getchar();
        if (valinta > ' ' && valinta < '~') 
        {
            switch (valinta) 
            {
                case '1':
                    printf("\nAnna jokin merkki: ");
                    scanf("%s", uusi);
                    getchar();
                    j = 0;
                    while(uusi[j] != '\0')
                    {
                        if (i == 200)
                        {
                            printf("\nMerkkijonoon ei mahdu enempää merkkejä.\n");
                            break;
                        }
                        else
                            merkit[i++] = uusi[j++];
                            
                    }
                    merkit[i] = '\0';
                    break;
                case '2':
                    printf("\nMerkkijono on tyhjennetty.\n");
                    while (merkit[k] != '\0')
                        merkit[k++] = ' ';
                    merkit[0] = '\0';
                    k = 0;
                    i = 0;
                    break;
                case '3':
                    if (merkit[0] != '\0')
                        printf("\nMerkkijono: %s\n", merkit);
                    else
                        printf("\nMerkkijono on tyhjä.\n");
                    break;
                case '0':
                    break;
                default:
                    printf("\nTuntematon valinta.\n");
                    break;
            }
       }
    }
    printf("\nOhjelman lopetus.");
    return (0);
}