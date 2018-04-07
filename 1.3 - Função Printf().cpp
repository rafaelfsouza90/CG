#include<stdio.h>


main(){
	
	int a = 1;
	int i = 52;
	char tipo = 'c';
	float valor = 22.53;
	float x = 28.534;
	
	printf("i = %2d\n", i);
	printf("i = %4d\n", i);
	printf("x = %8.3f\n", x);
	printf("x = %-8.3f\n", x);
	printf("Inteiro: %d\nChar: %c\nFloat: %f\n", a, tipo, valor);
	
	//printf() - é de fato uma função asssim como a main
	// () - Sentença a ser apresentada na tela e deve ser limitada entre (" ") 
	
	
	/*
	O simbulo % dentro da sentença printf, indica que desejamos imprimir o conteúdo de alguma variável
	
	%c - Caracter
	%s - String
	%d - Inteiro
	%f - Float (notação decimal)
	%e - Float (notação exponencial)
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
	\t - Tabulação
	\b - Backspace
	\' - Aspas simples
	\" - dupla aspas
	\\ - Barra
}
