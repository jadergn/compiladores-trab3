#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash.h"

#define TAM 97


struct variavel{
	char *nome;
	void *valor;
	int tipo; //inteiro=0, caracter=1, string=2, real=3, booleano =4
	int escopo; //local=0, global=1
	int  usada;
};

struct funcao{
	char *nome;
	int retorno; // inteiro=0, caracter=1, string=2, real=3, booleano =4
	int  aridade; 
};

//tipo pode ser variavel=0 funcao=1
struct lista{
	int tipo;
	void *info;
	struct lista *prox;
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

void imprime (Lista* l){
	Lista* p;
	Variavel *v;
	Funcao *f;
	/*if(l==NULL){
		printf("vazio!!!");
		exit(0);
		}
	printf("aqui\n");*/
	for (p=l; p!= NULL; p=p->prox){
		
		if(p->tipo ==0){
			v = (Variavel*)p->info;
			printf(" Variavel: nome = %s tipo = %d usada = %d escopo = %d \n",v->nome,v->tipo,v->usada,v->escopo);		
		}else if(p->tipo ==1){
			f = (Funcao*)p->info;
			printf("Funcao: nome = %s retorno = %d aridade = %d\n",f->nome, f->retorno, f->aridade);		
		}
		
	}
}

int vazia (Lista* l){
	if(l==NULL)
		return 1;
	else
		return 0;

}

Lista* busca (Lista* l, char c[]){
	Lista* p;
	Variavel *v;
	Funcao *f;
	for(p=l; p!=NULL; p=p->prox){
		if(p->tipo ==0){
			v = (Variavel*)p->info;
			if(strcmp(v->nome,c)==0){
				return p;			
			}
		}
		else if(p->tipo ==1){
			f = (Funcao*)p->info;
			if(strcmp(f->nome,c)==0){
				return p;			
			}		
		}
	}
	return NULL;	
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
Lista* insere_variavel_lista(Lista* l, char nome[], int usada){
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	Variavel* var = (Variavel*) malloc (sizeof(Variavel));
	var->nome = (char*) malloc ((strlen(nome)+1)*sizeof(char));
	strcpy(var->nome,nome);
	var->valor = NULL;
	var->tipo = -1;
	var->usada = usada;
	var->escopo = -1;
	novo->info = var;
	novo->tipo = 0;
	novo->prox = l;
	l = novo;
	return l;
}
//insere uma lista de variavel na tabela hash
Lista** insere_variavel_hash(Lista** h, Lista* l, int tipo){
	Lista* p;
	Variavel* v = (Variavel*) malloc (sizeof(Variavel));;
	int usada,escopo;
	char nome[100];
	
	for(p=l;p!=NULL;p=p->prox){
		
		v = (Variavel*)p->info;
		strcpy(nome,v->nome);
		usada = v->usada;
		escopo = 0;
		//printf("--nome = %s\n",nome);
		insere_variavel(h, nome, tipo, usada,escopo);
		nome[0]='\0';
	}
}
//insere uma variavel na tabela hash
Lista** insere_variavel (Lista** l, char nome[], int tipo, int usada, int escopo){
	int pos=0,i=0;
	char c;
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	Variavel* var = (Variavel*) malloc (sizeof(Variavel));
	var->nome = nome;
	var->tipo = tipo;
	var->usada = usada;
	var->escopo = escopo;
	//printf("---------nome = %s\n",nome);
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
	//printf("3\n");	
	c =nome[i];
	pos =pos+(int)c;
	while(c!='\0'){
		i++;	
		c=nome[i];
		pos=pos+(int)c;
	}
	
	pos = pos%TAM;
	printf("4 - pos = %d nome = %s\n",pos,nome);
	/*if(l[pos]==NULL)
		printf("null nome =%s \n",nome); //nao ta indo o nome
	else
		printf("ok aqui!");	*/	
	//O erro esta dando aqui qdo tenta acessar o l[pos], nao tenho ideia do que esta acontecendo
	novo->prox = l[pos];
	
	l[pos] = novo;
	//printf("5\n");
	return l;
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
	while(c!='\n'){
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
			imprime(l[i]);
		}	
	}
}

/*void main (void){
	int i;
	Lista* l;
	Lista** v;
	
	v = inicializa_hash();
		
	v = insere_variavel(v,"a1\n","jader",2,0,0);
	v = insere_funcao(v,"func1\n",0,1);
	v = insere_variavel(v,"a2\n","j",2,0,0);
	v = insere_funcao(v,"func2\n",0,1);
	v = insere_variavel(v,"a3\n","ja",2,0,0);
	v = insere_funcao(v,"func3\n",0,1);
	v = insere_variavel(v,"a4\n","jad",2,0,0);
	v = insere_funcao(v,"func1\n",0,1);
	v = insere_variavel(v,"a5\n","jade",2,0,0);
	v = insere_funcao(v,"func5\n",0,1);	
	v = insere_variavel(v,"a1\n","jader",2,0,0);


	
	imprime_hash(v);
	
}*/
