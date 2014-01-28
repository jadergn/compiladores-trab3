all: analisador relatorio

analisador:	
	flex -i analisador_lexico.l
	bison analisador_sintatico.y
	gcc -o trab2 analisador_sintatico.tab.c -lfl
	
relatorio:
	pdflatex trab2.tex

clean:
	rm -rf trab2 lex.yy.c analisador_sintatico.tab.c *~
	rm -rf trab2.log trab2.aux trab2.pdf
