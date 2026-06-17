#include <stdio.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 main() {
	
	float altescada, altdesejada, neededsteps;
	
 printf ("digite a altura de cada degrau em cm: ");
 scanf ("%f", & altescada);
 printf("\n digite a altura que voce deseja subir ao total em metros: ");
 scanf("%f", & altdesejada);
 
 neededsteps = altdesejada / (altescada/100);
 printf ("\n a quantidade de degraus necessarios para atingir essa altura e de %.1f degraus", neededsteps);
 


	
	
	getch();
}
