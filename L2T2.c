#include <stdio.h>
int main(void)
{
    int luku = 0;
    int i;
    int summa = 0;

    printf("Anna jokin luku väliltä 10 - 200: ");
    scanf("%d", &luku);
    if (luku > -1 && luku < 201)
    {
        for (i = 0; i <= luku; i++)
            summa += i; 
        printf("Lukujen 0 - %d summa on %d.", luku, summa);
    }
    else
        printf("Antamasi luku ei ole annetulla välillä.");
    return (0);
}