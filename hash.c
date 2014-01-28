#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 97


struct variavel{
	char *nome;
	char *valor;
	int tipo; //inteiro=0, caracter=1, string=2, real=3, booleano =4
	int escopo; //local=0, global=1
	int  usada;
};
typedef struct variavel Variavel;
struct funcao{
	char *nome;
	int retorno; // inteiro=0, caracter=1, string=2, real=3, booleano =4
	int  aridade; 
};
typedef struct funcao Funcao;
//tipo pode ser variavel=0 funcao=1
struct lista{
	int tipo;
	void *info;
	struct lista *prox;
};
typedef struct lista Lista;

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
	
	for (p=l; p!= NULL; p=p->prox){
		
		if(p->tipo ==0){
			v = (Variavel*)p->info;
			printf(" Variavel: nome = %s valor = %s tipo = %d usada = %d escopo = %d \n",v->nome,v->valor,v->tipo,v->usada,v->escopo);		
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

/*void libera (Lista* l){
	Lista* p=l;
	while (p!=NULL){
		Lista* t = p->prox;
		free (p);
		p=t;	
	}
}*/

Lista** insere_variavel (Lista** l, char nome[], char valor[], int tipo, int usada, int escopo){
	int pos=0,i=0;
	char c;
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	Variavel* var = (Variavel*) malloc (sizeof(Variavel));
	var->nome = nome;
	var->valor = valor;
	var->tipo = tipo;
	var->usada = usada;
	var->escopo = escopo;
	novo->info = var;
	novo->tipo = 0;

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

void main (void){
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
	
}
