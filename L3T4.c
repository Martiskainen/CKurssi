#include <stdio.h>

int kopioi(char *jono, char *kopio)
{
    int i = 0;

    while (jono[i + 1] != '\0')
    {
        kopio[i] = jono[i];
        i++;
    }
    jono[i] = '\0';
    kopio[i] = '\0';
    
    return (0);
}

int main()
{
    char jono[30];
    char kopio[30];

    printf("Anna kopioitava merkkijono: ");
    fgets(jono, 30, stdin);
    kopioi(jono, kopio);
    printf("Merkkijono 1 on '%s'.\nMerkkijono 2 on '%s'.\nKiitos ohjelman käytöstä.", jono, kopio);
}