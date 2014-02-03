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
	int retorno; // inteiro=0, caracter=1, string=2, real=3, booleano =4, void = -1
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



int vazia (Lista* l){
	if(l==NULL)
		return 1;
	else
		return 0;

}
//Busca uma variavel ou fum funcao na tabela hash, caso nao encontre retorna NULL
Lista* busca (Lista** l, char nome[]){
	Lista* p;
	Variavel *v;
	Funcao *f;
	char c;
	int pos,i;	
	pos=0;
	c=nome[0];
	pos =pos+(int)c;
	i=1;
	while(c!='\0'){
			
		c=nome[i];
		pos=pos+(int)c;
		i++;
	}
	
	pos = pos%TAM;
	for(p=l[pos]; p!=NULL; p=p->prox){
		if(p->tipo ==0){
			v = (Variavel*)p->info;
			if(strcmp(v->nome,nome)==0){
				return p;			
			}
		}
		if(p->tipo ==1){
			f = (Funcao*)p->info;
			if(strcmp(f->nome,nome)==0){
				return p;			
			}		
		}
	}
	return NULL;	
}
//dada uma hash e uma expressao verifica se o tipo das variaveis da expressao sao compativeis
int verifica_tipo(Lista** h, char expressao[]){
	char var[40];
	int i=1,j=0,tipo=-1;
	Lista* l;
	Variavel* v;
	while(expressao[i]!='\0'){
		//separa cada variavel na expressao
		while(expressao[i]!='-' && expressao[i]!='\0'){
			var[j] = expressao[i];
			i++;
			j++;
		}
		i++;
		var[j] = '\0';
		j=0;
		//busca a variavel na tabela de variaveis
		l = busca(h,var);
		if(l!=NULL){
			v = (Variavel*) l->info;
			if(tipo == -1){
				tipo = v->tipo;
			}
			else{
				//se tiver algum tipo diferente retorna 0
				if (tipo != v->tipo)
					return 0;
			}
			
		}
	}
	//se todos os tipos forem iguais retorna 1
	return 1;
}

int set_usada (Lista *l){
	Variavel *v;
	v= (Variavel*)l->info;
	v->usada =1; 
}

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
//insere uma lista de variaveis na tabela hash
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
		if(insere_variavel(h, nome, tipo, usada,escopo) == NULL)
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
	novo->prox = l[pos];
	
	l[pos] = novo;
	return l;
}

//insere a funcao em uma lista
Lista* insere_funcao_lista(Lista* l, char nome[]){
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

//insere uma lista de funcoes na tabela hash
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
//insere uma funcao na tabela hash
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
	while(c!='\0'){
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
//imprime uma lista
void imprime (Lista* l){
	Lista* p;
	Variavel *v;
	Funcao *f;
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
//percorre a hash verificando se todas as variaveis foram utilizadas
void verifica_variavel_usada(Lista** l){
	int i;
	Lista* p;
	Variavel *v;
	for(i=0;i<TAM;i++){
		if(l[i]!=NULL){
			//para cada posicao da hash que eh uma lista chama verifica
			verifica(l[i]);
		}	
	}
}
//percorre uma lista verificando se todas as variaveis foram utilizadas
void verifica (Lista* l){
	Lista* p;
	Variavel *v;
	for (p=l; p!= NULL; p=p->prox){
		
		if(p->tipo ==0){
			v = (Variavel*)p->info;
			if(v->usada == 0)
				printf("Erro semantico. Variavel %s nao utilizada.\n",v->nome);	
		}
	}
}
//retorna o tipo da variavel
int get_tipo(Lista* l){
	Variavel *v;
	v=(Variavel*)l->info;
	return v->tipo;
}
//retorna a aridade da funcao
int get_aridade(Lista* l){
	Funcao *f;
	f=(Funcao*)l->info;
	return f->aridade;
}
