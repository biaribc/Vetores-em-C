//Sintese
//Objetivo:Faça um algoritmo que leia até 30 letras e as escreva na ordem inversa (ou contrária) da que foram lidas.
//Entrada: 30 letras
//Saída: Letras em order inversa

#include<stdio.h>
int main(void){
	char letra[29];
	int i;	
	for(i=0;i<=29;i++){
		printf("Insira uma letra:");
		scanf("%c",&letra[i]);
		fflush(stdin);		
	}
	for(i=29;i>=0;i--){
		printf("\n %c",letra[i]);
	}
	return 0;
}