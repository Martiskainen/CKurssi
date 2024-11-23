#include <stdio.h>
int main(void)
{
    char etu[20];
    char suku[20];
    int ika = 0;
    float paino = 0;

    printf("Anna etunimesi: ");
    scanf("%s", etu);
    printf("Anna sukunimesi: ");
    scanf("%s", suku);
    printf("Anna ikäsi: ");
    scanf("%d", &ika);
    printf("Anna painosi: ");
    scanf("%f", &paino);
    printf("Nimesi on %s %s, ikäsi on %d vuotta ja painat %.1f kg.", etu, suku, ika, paino);
    return (0);
}