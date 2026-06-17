#include <conio.h>
#include <stdio.h>
//Elabore um algoritmo que leia vários números positivos e imprima, ao final, a média dos números
//digitados. 
main(){
	int num,var,soma, cont;
	float media;
	while(var!=123){printf("digite um numero positivo: ");
	scanf("%d", &num);
	if(num>=0){
	soma = soma+num;
	cont++;
	}
	else{var=123;
	}}

	media = soma/cont;
	printf("a media desses numeros eh: %.2f", media);
	getch();
}
