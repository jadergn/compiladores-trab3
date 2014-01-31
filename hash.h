#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct variavel Variavel;
typedef struct funcao Funcao;
typedef struct lista Lista;


Lista* inicializa (void);
Lista** inicializa_hash (void);
void imprime (Lista* l);
int vazia (Lista* l);
void verifica_variavel_usada(Lista** l);
void verifica (Lista* l);
int get_tipo(Lista* l);
int verifica_tipo(Lista** h, char expressao[]);
Lista* busca (Lista** l, char c[]);
Lista* insere_variavel_lista(Lista* l, char nome[], int usada);
Lista** insere_variavel_hash(Lista** h, Lista* l, int tipo);
Lista** insere_variavel (Lista** l, char nome[], int tipo, int usada, int escopo);
Lista** insere_funcao (Lista** l, char nome[], int retorno, int aridade);
void imprime_hash(Lista** l);


