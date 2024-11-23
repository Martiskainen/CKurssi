#include <stdio.h>
#include <string.h>

#define MAX 50
typedef struct tunnukset
{
    int id[MAX];
    char nimi[MAX][MAX];
    char salasana[MAX][MAX];
}tunnukset;
struct tunnukset t;

int main()
{
    int valinta;
    char n[50];
    char s[50];
    int i = 0;
    int j;
    
    printf("Käyttäjätunnusten hallinta.\n");
    printf("Valitse haluamasi toiminto:\n1) Lisää uusi tunnus\n2) Tulosta tunnukset\n0) Lopeta\nValintasi: ");
    scanf("%d", &valinta);
    
    while (valinta != 0)
    {
        if (valinta == 1)
        {   
            printf("\nAnna käyttäjätunnus: ");
            scanf("%s", n);
            strcpy(t.nimi[i], n);
            printf("Anna salasana: ");
            scanf("%s", s);
            strcpy(t.salasana[i], s);
            printf("Tunnus '%s' lisättiin listaan.\n", n);
            t.id[i] = i;
            i++;
        }
        else if (valinta == 2)
        {
            
            if (i == 0)
                printf("\nListalla ei ole yhtään tunnusta.\n");
            else
            {
                printf("\nListalla olevat tunnukset:\n");
                for (j = 0; j < i; j++)
                {
                    strcpy(n, t.nimi[j]);
                    strcpy(s, t.salasana[j]);
                    printf("%d. tunnus '%s', salasana '%s', ID '%d'.\n", (j + 1), n, s, t.id[j]);
                }
            }
        }
        printf("\nValitse haluamasi toiminto:\n1) Lisää uusi tunnus\n2) Tulosta tunnukset\n0) Lopeta\nValintasi: ");
        scanf("%d", &valinta);
    }
    printf("\nKiitos ohjelman käytöstä.");
    return (0);
}