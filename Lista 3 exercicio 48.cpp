#include <stdio.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 main() {
	
	float salamin, hora, valorhora, salarbrut, salariofinal;

	salamin = 1621;

		
	printf ("insira a quantidade de horas trabalhadas ");
	scanf ("%f", & hora);
	
		valorhora = (salamin / 8);
	salarbrut = (hora * valorhora);
	salariofinal = (salarbrut - ((salarbrut * 3)/100));
	
	printf("\n sabendo que o salario minimo tem o valor de %.2f e voce trabalhou %.1f horas,", salamin, hora);
	printf( "\n voce recebera o valor de %.2f na sua conta apos o desconto de impostos", salariofinal);
	
	getch();
}
