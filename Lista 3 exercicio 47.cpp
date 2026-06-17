#include <stdio.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 main() {
	
	float precofab, txlucro, tximpos, lucro, imposto, precofinal;
	
	printf ("insira o preco de fabrica do carro: ");
	scanf ("%f", & precofab);
	printf("\n agora, informe a taxa percentual de lucro: ");
	scanf("%f", & txlucro);
	printf("\n agora, por ultimo insira a taxa percentual de impostos: ");
	scanf("%f", & tximpos);
	
	lucro = (precofab * txlucro)/100;
	imposto = (precofab * tximpos)/100;
	precofinal = (precofab + lucro + imposto);
	
	printf("\n o valor final do carro sera de: %.2f", precofinal);
	
	getch();
}
