all: analisador relatorio

analisador:	
	gcc -c hash.c
	flex -i analisador_lexico.l
	bison -v analisador_sintatico.y
	gcc -o trab3 analisador_sintatico.tab.c -lfl hash.o
	
relatorio:
	pdflatex trab2.tex

clean:
	rm -rf trab2 lex.yy.c analisador_sintatico.tab.c *~
	rm -rf trab2.log trab2.aux trab2.pdf
