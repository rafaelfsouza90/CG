#include<stdio.h>

main(){
	
	//A função Scanf é rsponsável pela entrada de dados via teclado

	int i, j;
	float x, y;
	double a, b;
	
	scanf("%d\n", &i);
	scanf("%f\n", &x);
	scanf("%lf\n", &a);
	
	//O comando scanf interrompe a execução do programa e aguarda o usuário entrar com um valor para a variável x
	
	j = i % 2;
	y = x * 2;
	b = a / 2;
	
	printf("i = %3d j = %3d \n", i, j);
	printf("x = %.3f y = %.3f", x, y);
	printf("a = %g b = %g\n", a, b);
	
	
}
