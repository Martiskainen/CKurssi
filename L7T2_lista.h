#ifndef L7T2
#define L7T2

typedef struct lista
{
    int luku;
    struct lista *seuraava;
} li;

void vapautamuisti();
void tulosta();
void lisaaloppuun(int isompi);
void lisaakeskelle(int isompi);
void poistakeskelta();
int luo(int viimeinen);
void valikko();

#endif