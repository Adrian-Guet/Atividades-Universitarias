#include <conio.h>
#include <stdio.h>
//Elabore um algoritmo que leia vários números enquanto forem positivos e imprima, ao final, quantos
//números foram digitados. 
 main(){
 int num, cont;
 while(num>0){printf("digite um numero: ");
 scanf("%d", &num); 
 printf("o numero digitado foi: %d\n", num);
 cont++;
 }
  printf("voce encerrou o programa ao inserir valores negativos");
 printf("\n\nvoce digitou %d numeros", cont-1);
 }
 
 
