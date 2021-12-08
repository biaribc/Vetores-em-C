//Sintese
//Objetivo: Faça um algoritmo que calcule e escreva
// o somatório dos valores armazenados numa variável composta unidimensional, 
//chamada dados, de até 100 elementos numéricos a serem lidos.
//Entrada: elementos numericos
//saída: Somatória de Elementos

#include <stdio.h>
int main(void){
	float dado[100], soma=0;
	int i;
	
	for(i=0;i<=99;i++){
		printf("Insira o dado numero %i",i+1);
		scanf("%f",&dado[i]);
		
		soma=dado[i]+soma;
		
	}
	printf("%.2f",soma);
}
