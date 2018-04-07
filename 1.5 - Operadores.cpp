#include<stdio.h>

main(){
		
		//Definição das variáveis
		float a, b, c;
		float x1, x2;
		
		//Entrada de dados
		printf("Entre a, b, c: ");
		scanf("%f %f %f", &a, &b, &c);
		
		//Calculo das raizes
		x1 = (-b+sqrt(b*b-4*a*c)) / (2*a);
		x2 = (-b-sqrt(b*b-4*a*c)) / (2*a);
		
		//Impressão dos dados finais
		printf("\n x1 = %f x2 = %f ", x1, x2);
	
	
	/* Operadores
	+ Soma
	- Subtração
	* Multiplicação
	/ Divisão
	% Resto da divisão


	Operação de incremento de uma unidade:
	i = i + 1; frequentemente reprsentado por i++
	==============================================
	i = i - 1; pode ser inscrito como i--
	*/
}
