#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    if (argc == 1)
        printf("Et antanut syötteitä.");
    else if (strcmp(argv[2], "+") == 0)
        printf("%s + %s = %.2f", argv[1], argv[3], (atof(argv[1]) + atof(argv[3])));
    else if (strcmp(argv[2], "-") == 0)
        printf("%s - %s = %.2f", argv[1], argv[3], (atof(argv[1]) - atof(argv[3])));
    else if (strcmp(argv[2], "x") == 0)
        printf("%s x %s = %.2f", argv[1], argv[3], (atof(argv[1]) * atof(argv[3])));
    else if (strcmp(argv[2], "/") == 0)
        printf("%s / %s = %.2f", argv[1], argv[3], (atof(argv[1]) / atof(argv[3])));
    else
        printf("Virheellinen syöte.");
    printf("\nKiitos ohjelman käytöstä.");
    return (0);
}