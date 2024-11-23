#include <stdio.h>
int main(void)
{
    int luku = 0;
    int i = 0;

    printf("Anna jokin kokonaisluku väliltä 1-10: ");
    scanf("%d", &luku);
    if (luku > 0 && luku < 11)
    {
        while (i < luku)
        {
            i++; 
            printf("%d kierros.\n", i);
        }
    }
    else
        printf("Antamasi luku ei ole välillä 1-10.");
    return (0);
}