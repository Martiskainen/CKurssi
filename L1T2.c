#include <stdio.h>
int main(void)
{
    int kokonais;
    float liuku;
    
    printf("Anna kokonaisluku: ");
    scanf("%d", &kokonais);
    printf("Anna liukuluku: ");
    scanf("%f", &liuku);
    printf("Annoit luvut %d ja %.2f.", kokonais, liuku);
    return (0);
}