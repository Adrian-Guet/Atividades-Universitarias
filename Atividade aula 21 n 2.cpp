#include <conio.h>
#include <stdio.h>
 main(){
//Elabore um algoritmo que leia vários números e imprima o triplo de cada um. O algoritmo acaba
//quando for digitado o número –999. 
int num=0, triplo;
while(num!=-999){printf("digite um numero: ");
scanf("%d",&num);
triplo=num*3;
printf("o triplo desse numero e: %d\n", triplo);
}
printf("\nprograma encerrado.");
getch();
 } 
