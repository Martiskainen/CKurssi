#include <stdio.h>
#include <stdlib.h>

#define RIVI 2
#define SARAKE 2

int tulosta(int r1a1, int r1a2, int r2a1, int r2a2)
{
    int rivi, sarake;
    int matriisi[RIVI][SARAKE] = {{r1a1, r1a2}, {r2a1, r2a2}};

    for (rivi = 0; rivi < RIVI; rivi++)
    {
        for (sarake = 0; sarake < SARAKE; sarake++)
            printf("%4d ", matriisi[rivi][sarake]);
        printf("\n");
    }
    return (0);
}

int main()
{
    int m1r1a1, m1r1a2, m1r2a1, m1r2a2;
    int m2r1a1, m2r1a2, m2r2a1, m2r2a2;
    int msr1a1, msr1a2, msr2a1, msr2a2;

    printf("Anna arvot yhteenlaskettaville matriiseille:\nMatriisin 1 alkiot:\nRivi 1 alkio 1: ");
    scanf("%d", &m1r1a1);
    printf("Rivi 1 alkio 2: ");
    scanf("%d", &m1r1a2);
    printf("Rivi 2 alkio 1: ");
    scanf("%d", &m1r2a1);
    printf("Rivi 2 alkio 2: ");
    scanf("%d", &m1r2a2);
    printf("\nMatriisi 1:\n");
    tulosta(m1r1a1, m1r1a2, m1r2a1, m1r2a2);
    
    printf("\nMatriisin 2 alkiot:\nRivi 1 alkio 1: ");
    scanf("%d", &m2r1a1);
    printf("Rivi 1 alkio 2: ");
    scanf("%d", &m2r1a2);
    printf("Rivi 2 alkio 1: ");
    scanf("%d", &m2r2a1);
    printf("Rivi 2 alkio 2: ");
    scanf("%d", &m2r2a2);
    printf("\nMatriisi 2:\n");
    tulosta(m2r1a1, m2r1a2, m2r2a1, m2r2a2);

    printf("\nSummamatriisi:\n");
    msr1a1 = m1r1a1 + m2r1a1;
    msr1a2 = m1r1a2 + m2r1a2;
    msr2a1 = m1r2a1 + m2r2a1;
    msr2a2 = m1r2a2 + m2r2a2;
    tulosta(msr1a1, msr1a2, msr2a1, msr2a2);
    
    printf("\nKiitos ohjelman käytöstä.");
    return (0);
}