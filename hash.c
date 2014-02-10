#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash.h"

#define TAM 97


struct variavel{
	char *nome;
	void *valor;
	int tipo; // inteiro = 0, caracter = 1, string = 2, real = 3, booleano = 4
	int escopo; // (0) => global, (> 0) => funcao/local
	int  usada;
};

struct funcao{
	char *nome;
	int retorno; // inteiro = 0, caracter = 1, string = 2, real = 3, booleano = 4
	int  aridade;
	int escopo;
};

//tipo pode ser variavel = 0 funcao = 1
struct lista{
	int tipo;
	void *info;
	struct lista *prox;
};

struct pilha {
	Item *topo;
};

struct item {
	int tipo;
	struct item *prox;
};

Lista* inicializa (void){
	return NULL;
}

Lista** inicializa_hash (){
	int i;
	Lista **v;
	v = (Lista**) malloc(TAM*sizeof(Lista*));
	for(i=0; i<TAM;i++){
		v[i] = inicializa();	
	}
	return v;
}



int vazia (Lista* l){
	if(l==NULL)
		return 1;
	else
		return 0;

}

Lista* busca (Lista** l, char nome[]){
	Lista* p;
	Variavel *v;
	Funcao *f;
	char c;
	int pos,i;	
	pos=0;
	c=nome[0];
	//printf("nome = %s ",nome);
	pos =pos+(int)c;
	i=1;
	while(c!='\0'){
			
		c=nome[i];
		pos=pos+(int)c;
		i++;
	}
	
	pos = pos%TAM;
	//printf("\npos = %d, nome = %s, TAM = %d\n",pos,nome,TAM);
	for(p=l[pos]; p!=NULL; p=p->prox){
		//v = (Variavel*)p->info;
		//	printf("v= %s, tipo = %d\n",v->nome,v->tipo);
			
		if(p->tipo ==0){
			v = (Variavel*)p->info;
			//printf("v= %s, tipo = %d\n",v->nome,v->tipo);
			if(strcmp(v->nome,nome)==0){
				// printf("v= %s, tipo = %d\n",v->nome,v->tipo);
				return p;			
			}
		}
		/*if(p->tipo ==1){
			f = (Funcao*)p->info;
			if(strcmp(f->nome,nome)==0){
				return p;			
			}		
		}*/
	}
	return NULL;	
}
int verifica_tipo(Lista** h, char expressao[]){
	char var[40];
	int i=1,j=0,tipo=-1;
	Lista* l;
	Variavel* v;
	while(expressao[i]!='\0'){
		while(expressao[i]!='-' && expressao[i]!='\0'){
			var[j] = expressao[i];
			i++;
			j++;
			//printf("%c\n",expressao[i]);
		}
		i++;
		var[j] = '\0';
		j=0;
		//printf("%s\n",var);
		l = busca(h,var);
		if(l!=NULL){
			v = (Variavel*) l->info;
			if(tipo == -1){
				tipo = v->tipo;
			}
			else{
				if (tipo != v->tipo)
					return 0;
			}
			
		}
	}
	return 1;
}

int set_usada (Lista *l){
	Variavel *v;
	v= (Variavel*)l->info;
	v->usada =1;
}

/*Lista* retira (Lista* l, char c){
	Lista* ant = NULL;
	Lista* p = l;

	while (p!=NULL && p->info != c){
		ant = p;
		p=p->prox;
	}
	if (p==NULL)
		return l;
	if(ant == NULL){
		l = p->prox;
	
	}
	else{
		ant->prox = p->prox;
		
	}
	free(p);
	return l;
}*/

void libera (Lista* l){
	Lista* p=l;
	while (p!=NULL){
		Lista* t = p->prox;
		free(p->info);
		free (p);
		p=t;	
	}
}
//insere a variavel em uma lista
Lista* insere_variavel_lista(Lista* l, char nome[], int tipo, int escopo, int usada){
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	
	if(strcmp(nome, "") == 0) {
		printf(" *** inserindo tipo na lista *** \n", nome);
		novo->info = NULL;
		novo->tipo = tipo;
		novo->prox = l;
		l = novo;
		return l;
	}

	Variavel* var = (Variavel*) malloc (sizeof(Variavel));
	var->nome = (char*) malloc ((strlen(nome)+1)*sizeof(char));
	strcpy(var->nome,nome);
	var->valor = NULL;
	if(tipo >= 0) {
		var->tipo = tipo;
	}
	else {
		var->tipo = -1;	
	}
	if(escopo >= 0) {
		var->escopo = escopo;
	}
	else {
		var->escopo = -1;	
	}
	var->usada = usada;
	novo->info = var;
	novo->tipo = 0;
	novo->prox = l;
	l = novo;
	return l;
}


//remove o primeiro elemento da lista, semelhante ao pop
Lista* remove_variavel_lista(Lista *l) {
	Lista *p;
	
	p = l;
	//lista vazia
	if(!p) {
		return NULL;
	}
	//lista com apenas 1 item
	// else if(!p->prox) {
	// 	l = NULL;
	// 	return p;
	// }
	// lista com mais de 1 item
	else {
		// printf("nao vazia\n" );
		l = l->prox;
		return p;
	}

	return NULL;
}

//insere uma lista de variavel na tabela hash
Lista** insere_variavel_hash(Lista** h, Lista* l, int tipo){
	Lista* p;
	Variavel* v = (Variavel*) malloc (sizeof(Variavel));;
	int usada, escopo;
	char nome[100];
	
	for(p = l; p != NULL; p = p->prox){
		
		v = (Variavel*)p->info;
		strcpy(nome, v->nome);
		usada = v->usada;
		escopo = 0;
		if(insere_variavel(h, nome, tipo, usada, escopo) == NULL)
			return NULL;
		nome[0]='\0';
	}
	return h;
}
//insere uma variavel na tabela hash
Lista** insere_variavel (Lista** l, char nome[], int tipo, int usada, int escopo){
	int pos=0,i=0;
	char c;
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	Variavel* var = (Variavel*) malloc (sizeof(Variavel));
	var->nome = (char*) malloc ((strlen(nome)+1)*sizeof(char));
	strcpy(var->nome,nome);
	if(busca(l,var->nome) != NULL){
		return NULL;
	}
	var->tipo = tipo;
	var->usada = usada;
	var->escopo = escopo;
	if(tipo == 0)
		var->valor = (int*) malloc(sizeof(int));
	else if(tipo == 1)
		var->valor = (char*) malloc(sizeof(char));
	else if(tipo == 2)
		var->valor = (char**) malloc(sizeof(char*));
	else if(tipo == 3)
		var->valor = (float*) malloc(sizeof(float));
	else if(tipo == 4)
		var->valor = (int*) malloc(sizeof(int));
	novo->info = var;
	novo->tipo = 0;
	c =nome[i];
	pos =pos+(int)c;
	i=1;
	while(c!='\0'){
		c=nome[i];
		pos=pos+(int)c;
		i++;
	}
	
	pos = pos%TAM;
	//printf("4 - pos = %d nome = %s\n",pos,nome);
	novo->prox = l[pos];
	
	l[pos] = novo;
	return l;
}

//insere a variavel em uma lista
Lista* insere_funcao_lista(Lista* l, char nome[], int usada){
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	Funcao* func = (Funcao*) malloc (sizeof(Funcao));
	func->nome = (char*) malloc ((strlen(nome)+1)*sizeof(char));
	strcpy(func->nome,nome);
	func->retorno = -1;
	func->aridade = -1;
	novo->info = func;
	novo->tipo = 1; // tipo == 1 é funcao
	novo->prox = l;
	l = novo;
	return l;
}

//insere uma lista de variavel na tabela hash
Lista** insere_funcao_hash(Lista** h, Lista* l, int retorno, int aridade){
	Lista* p;
	Funcao* f = (Funcao*) malloc (sizeof(Funcao));;
	// int usada,escopo;
	char nome[100];
	
	for(p = l; p != NULL; p = p->prox){
		
		f = (Funcao*)p->info;
		strcpy(nome,f->nome);
		// usada = f->usada;
		// escopo = 0;
		if(insere_funcao(h, nome, retorno, aridade) == NULL)
			return NULL;
		nome[0] = '\0';
	}
	return h;
}

Lista** insere_funcao (Lista** l, char nome[], int retorno, int aridade){
	int pos=0,i=0;
	char c;
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	Funcao* func = (Funcao*) malloc (sizeof(Funcao));
	func->nome = nome;
	func->retorno = retorno;
	func->aridade = aridade;
	novo->info = func;
	novo->tipo = 1;

	c =nome[i];
	pos =pos+(int)c;
	while(c != '\0'){
		i++;	
		c=nome[i];
		pos=pos+(int)c;
	}
	pos = pos%TAM;
	novo->prox = l[pos];
	l[pos] = novo;
	return l;
}

void imprime_hash(Lista** l){
	int i;
	for(i=0;i<TAM;i++){
		if(l[i]!=NULL){
			imprime(l[i], 0);
		}	
	}
}

void imprime (Lista* l, int somente_tipo){
	Lista* p;
	
	if(somente_tipo) {
		// printf("imprimindo lista de tipos\n", p->tipo);
		for (p = l; p; p=p->prox){
			printf(" tipo = %d\n", p->tipo);
		}	
	}
	else {
		Variavel *v;
		Funcao *f;
		for (p=l; p!= NULL; p=p->prox){
			if(p->tipo ==0){
				v = (Variavel*)p->info;
				printf(" Variavel: nome = %s tipo = %d usada = %d escopo = %d \n",v->nome,v->tipo,v->usada,v->escopo);		
			}
			else if(p->tipo ==1){
				f = (Funcao*)p->info;
				printf("Funcao: nome = %s retorno = %d aridade = %d\n",f->nome, f->retorno, f->aridade);		
			}
		}
	}
}

void verifica_variavel_usada(Lista** l){
	int i;
	Lista* p;
	Variavel *v;
	for(i=0;i<TAM;i++){
		if(l[i]!=NULL){
			verifica(l[i]);
		}	
	}
}
void verifica (Lista* l){
	Lista* p;
	Variavel *v;
	for (p=l; p!= NULL; p=p->prox){
		
		if(p->tipo ==0){
			v = (Variavel*)p->info;
			if(v->usada == 0)
				printf("Variavel %s nao utilizada.\n",v->nome);	
		}
	}
}

int get_tipo(Lista* l){
	Variavel *v;
	v=(Variavel*)l->info;
	return v->tipo;
}

Lista * verifica_compatibilidade_tipo(Lista *l) {
	Lista *p;
	int tam;
	tam = tamanho(l);

	// se a lista tiver 2 items deve ser verificado os tipos dos dois items e retorna null para incompatibilidade
	// ou uma lista com 1 item compativel. Por exemplo: 0 (inteiro) e 3 (real) retorna uma lista com apenas 3 (real)
	if (tam > 1) {
		
	}

}

int tamanho(Lista* l) {
	int tam = 0;
	Lista *p;
	for (p = l; p; p = p->prox) {
		tam++;
	}
	return tam;
}

Pilha *pilha_constroi() {
	Pilha *pilha;
	pilha = (Pilha *)malloc(sizeof(Pilha));
	pilha->topo = NULL;
	return pilha;
}

int pilha_vazia(Pilha *pilha) {
	if(!pilha->topo) {
		return 1;
	}
	return 0;
}

int pilha_tamanho(Pilha *pilha) {
	Item *pont;
	int tam = 0;

	if (pilha_vazia(pilha)) {
		return 0;
	}
	for (pont = pilha->topo; pont; pont = pont->prox) {
		tam++;
	}

	return tam;
}

void pilha_insere(Pilha *pilha, int inteiro) {
	Item *novo;
	novo = (Item *)malloc(sizeof(Item));
	novo->tipo = inteiro;
	novo->prox = pilha->topo;
	pilha->topo = novo;
}

int pilha_remove(Pilha *pilha) {
	Item *pont;
	if(pilha_vazia(pilha)) {
		return -1;
	}
	pont = pilha->topo;
	pilha->topo = pilha->topo->prox;
	return pont->tipo;
}

void pilha_destroi(Pilha *pilha) {
	// implementar
}

void pilha_imprime(Pilha *pilha) {
	Item *pont;

	printf("Tamanho: %d\n", pilha_tamanho(pilha));	
	printf(":");
	for (pont = pilha->topo; pont; pont = pont->prox) {
		printf("%d:", pont->tipo);
	}
	printf("\n");
	return;
}

int pilha_verifica_compatibilidade(Pilha *pilha) {
	int primeiro, segundo;

	if(pilha_tamanho(pilha) > 1) {
		primeiro = pilha_remove(pilha);
		segundo = pilha_remove(pilha);

		// coersão, operaçoes envolvendo int e real retornam real
		if(primeiro == 0 && segundo == 3 || primeiro == 3 && segundo == 0) {
			pilha_insere(pilha, 3);
		}
		else if(primeiro != segundo) {
			return 0;
		}
		else if (primeiro == segundo) {
			pilha_insere(pilha, primeiro);	
		}
	}
	return 1;
}

// void main (void){
// }
