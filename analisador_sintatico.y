%{
#include <stdio.h>
#include "hash.h"

Lista **tab_variaveis, **tab_funcoes;
Lista *var, *func;

int i;
extern int tipo;
extern char * yytext;
extern char identificador[100];
extern int num_linha;
extern char expressao[2000];
%}

/*%error-verbose*/
%token token_pr_algoritmo
%token token_pr_variaveis
%token token_pr_fim_variaveis
%token token_pr_inicio
%token token_pr_fim
%token token_pr_inteiro
%token token_pr_inteiros
%token token_pr_caractere
%token token_pr_caracteres
%token token_pr_real
%token token_pr_reais
%token token_pr_literal
%token token_pr_literais
%token token_pr_logico
%token token_pr_logicos
%token token_pr_matriz
%token token_pr_se
%token token_pr_entao
%token token_pr_senao
%token token_pr_fim_se
%token token_pr_para
%token token_pr_de
%token token_pr_ate
%token token_pr_faca
%token token_pr_passo
%token token_pr_fim_para
%token token_pr_enquanto
%token token_pr_fim_enquanto
%token token_pr_imprima
%token token_pr_leia
%token token_pr_funcao
%token token_pr_retorne
%token token_pr_verdadeiro
%token token_pr_falso
%token token_pr_e
%token token_pr_ou
%token token_pr_nao
%token token_inteiro;
%token token_real;
%token token_caractere
%token token_literal
%token token_soma
%token token_subtracao
%token token_divisao
%token token_multiplicacao
%token token_incrementador
%token token_modulo
%token token_maior
%token token_maior_igual
%token token_menor
%token token_menor_igual
%token token_igual
%token token_diferente
%token token_e
%token token_e_bit
%token token_ou
%token token_ou_bit
%token token_xor_bit
%token token_til
%token token_nao
%token token_aspas_dupla
%token token_aspas_simples
%token token_abre_parenteses
%token token_fecha_parenteses
%token token_abre_chaves
%token token_fecha_chaves
%token token_abre_colchetes
%token token_fecha_colchetes
%token token_tralha
%token token_contra_barra
%token token_ponto
%token token_virgula
%token token_dois_pontos
%token token_ponto_virgula
%token token_atribuicao
%token token_identificador 
%token token_desconhecido

%token token_pr_escolha
%token token_pr_caso 
%token token_pr_fim_escolha
%token token_pr_default

%start algoritmo


%%


algoritmo
: declaracao_algoritmo bloco_variaveis declacarao_funcoes bloco_inicio 
| declaracao_algoritmo bloco_variaveis bloco_inicio
;

declaracao_algoritmo
: token_pr_algoritmo token_identificador token_ponto_virgula
;

/*bloco de variaveis pode nao existir ou pode ser vazio*/
bloco_variaveis
: token_pr_variaveis declaracao_variaveis token_pr_fim_variaveis
{
	
	/*if(busca(tab_variaveis,"a1a")!=NULL)
		imprime(busca(tab_variaveis,"a1a"));
	else
		printf("Nao encontrado\n");*/
}
| token_pr_variaveis token_pr_fim_variaveis
|
;

declaracao_variaveis
: lista_variaveis token_dois_pontos tipo_variavel token_ponto_virgula
{
	//printf("primeiro\n");
	tab_variaveis = insere_variavel_hash(tab_variaveis, var, tipo);
	if(tab_variaveis == NULL){
		printf("Erro semantico na linha %d. Variavel redeclarada.\n",num_linha);
		exit(0);
	}
	//printf ("identificador= %s\n",identificador);	
	libera(var);
	var = inicializa();
}
| declaracao_variaveis lista_variaveis token_dois_pontos tipo_variavel token_ponto_virgula
{
	//printf("segundo\n");
	tab_variaveis = insere_variavel_hash(tab_variaveis, var, tipo);
	if(tab_variaveis == NULL){
		printf("Erro semantico na linha %d. Variavel redeclarada.\n",num_linha);
		exit(0);
	}
	//printf ("identificador= %s\n",identificador);
	libera(var);
	var = inicializa();
	
}
;

tipo_variavel
: tipo_primitivo
| tipo_matriz
;

lista_variaveis
: lista_variaveis token_virgula token_identificador
{
	var = insere_variavel_lista(var,identificador,0);
			
	//printf("%s\n",identificador);
}
| token_identificador
{
	var = insere_variavel_lista(var,identificador,0);
	//printf("%s\n",identificador);
}
;

tipo_primitivo
: token_pr_inteiro
| token_pr_real
| token_pr_caractere
| token_pr_literal
| token_pr_logico
;

tipo_matriz
: token_pr_matriz matriz_colchetes token_pr_de tipo_primitivo_plural
;

matriz_colchetes
: matriz_colchetes token_abre_colchetes token_inteiro token_fecha_colchetes
| token_abre_colchetes token_inteiro token_fecha_colchetes
;

tipo_primitivo_plural
: token_pr_inteiros
| token_pr_reais
| token_pr_caracteres
| token_pr_literais
| token_pr_logicos
;

/*bloco inicio pode ser vazio*/
bloco_inicio
: token_pr_inicio lista_comandos token_pr_fim
{
	verifica_variavel_usada(tab_variaveis);
}
| token_pr_inicio token_pr_fim
;

lista_comandos
: lista_comandos comando
| comando
;

comando
: atribuicao
{
	if(!verifica_tipo(tab_variaveis,expressao))
		printf("Erro semantico na linha %d. Tipo invalido associado a variavel.\n",num_linha);

	//printf("at %s\n",expressao);
}
| chamada_funcao token_ponto_virgula
| chamada_funcao_interna
| comando_retorne
| comando_se
| comando_enquanto
| comando_para
| comando_escolha
;

valor_esquerda
: token_identificador
{
	//verifica se as variaveis que estao recebendo atribuicao foram declaradas, se sim usada=1
	var =busca(tab_variaveis,identificador); 
	if(var == NULL){
		printf("Erro semantico na linha %d. Variavel nao declarada.\n",num_linha);
		exit(0);
		
	}else{
		set_usada(var);
	}
	for(i-0;i<2000;i++){
		expressao[i]='\0';
	}
	//printf("%s\n",identificador);
	
	//imprime_hash(tab_variaveis);
	
}
| token_identificador matriz_colchetes
;

atribuicao
: valor_esquerda token_atribuicao expressao token_ponto_virgula
{
//printf("%s\n",identificador);
//printf("%s\n",expressao);

}
;

comando_retorne
: token_pr_retorne token_ponto_virgula
| token_pr_retorne expressao token_ponto_virgula
;

//nao pode ter escolha sem o caso
comando_escolha
: token_pr_escolha token_abre_parenteses token_identificador token_fecha_parenteses casos token_pr_fim_escolha
;

casos
: casos caso
| caso
;

caso
: token_pr_caso valor_primitivo token_dois_pontos lista_comandos token_pr_para token_ponto_virgula
| token_pr_caso valor_primitivo token_dois_pontos token_pr_para token_ponto_virgula
| token_pr_default token_dois_pontos lista_comandos token_pr_para token_ponto_virgula
;


comando_se
: token_pr_se expressao token_pr_entao lista_comandos token_pr_fim_se
| token_pr_se expressao token_pr_entao lista_comandos token_pr_senao lista_comandos token_pr_fim_se
;

comando_enquanto
: token_pr_enquanto expressao token_pr_faca lista_comandos token_pr_fim_enquanto
;

comando_para
: token_pr_para valor_esquerda token_pr_de expressao token_pr_ate expressao token_pr_faca lista_comandos token_pr_fim_para
| token_pr_para valor_esquerda token_pr_de expressao token_pr_ate expressao passo token_pr_faca lista_comandos token_pr_fim_para
;

passo
: token_pr_passo token_inteiro
| token_pr_passo token_soma token_inteiro
| token_pr_passo token_subtracao token_inteiro
;

expressao
: expressao token_pr_ou termo_1
| expressao token_ou termo_1
| termo_1
;

termo_1
: termo_1 token_pr_e termo_2
| termo_1 token_e termo_2
| termo_2
;

termo_2
: termo_2 token_ou_bit termo_3
| termo_3
;

termo_3
: termo_3 token_xor_bit termo_4
| termo_4
;

termo_4
: termo_4 token_e_bit termo_5
| termo_5
;

termo_5
: termo_5 token_igual termo_6
| termo_5 token_diferente termo_6
| termo_6
;

termo_6
: termo_6 token_menor termo_7
| termo_6 token_menor_igual termo_7
| termo_6 token_maior termo_7
| termo_6 token_maior_igual termo_7
| termo_7
;

termo_7
: termo_7 token_soma termo_8
| termo_7 token_subtracao termo_8
| termo_8
;

termo_8
: termo_8 token_multiplicacao termo_9
| termo_8 token_divisao termo_9
| termo_8 token_modulo termo_9
| termo_9
;

termo_9
: token_soma termo_9
| token_subtracao termo_9
| token_nao termo_9
| token_abre_parenteses expressao token_fecha_parenteses
| token_identificador
{
	var =busca(tab_variaveis,identificador); 
	if(var == NULL){
		printf("Erro semantico na linha %d. Variavel nao declarada.\n",num_linha);
		exit(0);
		
	}else{
		set_usada(var);
		//printf("Variavel declarada-> %s!!\n",identificador);
	}
	//printf("%s\n",expressao);
}
| valor_primitivo
| chamada_funcao
{
	func = busca(tab_funcoes, identificador); 
	if(func == NULL){
		printf("Erro semantico na linha %d. Funcao nao declarada.\n",num_linha);
		exit(0);
		
	} else {
		set_usada(func);
		printf("Funcao declarada-> %s!!\n",identificador);
	}
	//printf("%s\n",expressao);
}
| chamada_funcao_interna
;

valor_primitivo
: token_literal
| token_inteiro
| token_real
| token_caractere
| token_pr_verdadeiro
| token_pr_falso
;

chamada_funcao
: token_identificador token_abre_parenteses paramentros_chamada_funcao token_fecha_parenteses 
| token_identificador token_abre_parenteses token_fecha_parenteses 
;

chamada_funcao_interna
: token_pr_imprima token_abre_parenteses paramentros_chamada_funcao token_fecha_parenteses token_ponto_virgula
| token_pr_leia token_abre_parenteses token_fecha_parenteses 
;

paramentros_chamada_funcao
: paramentros_chamada_funcao token_virgula expressao
| expressao
;

declacarao_funcoes
: declacarao_funcoes declaracao_funcao
{
	//printf("declaracao de funcoes - ultima\n");
}
| declaracao_funcao
{
	//printf("declaracao de funcoes - primeira\n");
}
;

declaracao_funcao
: token_pr_funcao token_identificador paramentros_funcao_parenteses token_dois_pontos tipo_primitivo bloco_inicio
{
	tab_funcoes = insere_funcao_hash(tab_funcoes, func, tipo);
	if(tab_funcoes == NULL){
		printf("Erro semantico na linha %d. Funcao redeclarada.\n",num_linha);
		exit(0);
	}
	//printf ("identificador= %s\n",identificador);	
	libera(func);
	func = inicializa();
}
| token_pr_funcao token_identificador paramentros_funcao_parenteses bloco_inicio
{
	//printf("declaracao de funcoes - sem parametros\n");
}
;

paramentros_funcao_parenteses
: token_abre_parenteses paramentros_funcao token_fecha_parenteses
| token_abre_parenteses token_fecha_parenteses
;

paramentros_funcao
: paramentros_funcao token_virgula paramentro_funcao
| paramentro_funcao
;

paramentro_funcao
: token_identificador token_dois_pontos tipo_primitivo
| token_identificador token_dois_pontos tipo_matriz
;



%%

#include "lex.yy.c"

main(){
	
	tab_variaveis = inicializa_hash();
	var = inicializa();
	
	tab_funcoes = inicializa_hash();
	func = inicializa();
	
	yyparse();
}

/* rotina de erro */
yyerror (){
	printf("Erro! Linha %d\n", num_linha);
}
