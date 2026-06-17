#include <conio.h>
#include <stdio.h>
 main(){
 	//Elabore um algoritmo que leia várias letras enquanto forem diferentes de F, imprimindo cada letra
//logo após a leitura. 
char letra='a';
printf("digite uma letra ai: "); scanf("%c", &letra);
fflush(stdin);
while (letra!='F'){
printf("voce digitou: %c", letra);
printf("\ndigite outra letra: ");
scanf("%c", &letra);
fflush(stdin);
}
getch();
 } 
