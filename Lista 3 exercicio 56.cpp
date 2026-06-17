#include <stdio.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 main() {
	
	float pesosaco, pesoracao, restante5diaskg, restanteg;
 printf ("insira o peso do saco de racao em kg: ");
 scanf ("%f", & pesosaco);
 printf ("\n insira a quantidade de racao usada para cada gato por dia em gramas: ");
 scanf ("%f", & pesoracao);
 
 restante5diaskg = pesosaco - ((2 * pesoracao /1000 )*5);
 
 printf("a quantidade de raca restante apos 5 dias sera de %.2f kg", restante5diaskg);


	
	
	getch();
}
