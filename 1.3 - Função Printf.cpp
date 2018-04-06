#include<stdio.h>


main(){
	
	int a = 1;
	char tipo = 'c';
	float valor = 22.53;
	
	printf("Inteiro: %d\nChar: %c\nFloat: %f\n", a, tipo, valor);
	
	//printf() - � de fato uma fun��o asssim como a main
	// () - Senten�a a ser apresentada na tela e deve ser limitada entre (" ") 
	
	/*
	O simbulo % dentro da senten�a printf, indica que desejamos imprimir o conte�do de alguma vari�vel
	
	%c - Caracter
	%s - String
	%d - Inteiro
	%f - Float (nota��o decimal)
	%e - Float (nota��o exponencial)
	%g - Float
	%u - Inteiro sem sinal
	%x - Hexadecinal inteiro
	%o - Octal inteiro
	%ld - Long
	%lu - Long
	%lx - Long
	%lo - Long
	
	*/
	
	/* Existem outros caracteres de controle e todos inicial com um \ "
	
	\n - Nova linha
	\t - Tabula��o
	\b - Backspace
	\' - Aspas simples
	\" - dupla aspas
	\\ - Barra
}
