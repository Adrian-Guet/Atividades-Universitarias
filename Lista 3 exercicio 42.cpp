#include <stdio.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 main() {
	
	float pes, pol, jar, mile;
	
	printf ("insira o valor em pes: ");
	scanf ("%f", & pes);
	
	pol = (pes * 12);
	jar = (pes / 3);
	mile = (jar / 1760);
	
	printf ("o valor em pes convertido para polegadas e: %.2f", pol);
	printf ("\n o valor em pes convertido para jardas e: %.2f", jar);
	printf ("\n o valor em pes convertido para milhas e: %f", mile);
	
	getch();
}
