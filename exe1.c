//Sintese
//Objetivo: Faça um algoritmo que leia um vetor de até 80 elementos. Após a leitura de todos os dados, leia um número e verifique se existem elementos no vetor iguais ao número lido. 
//Se existirem, escrever, em uma tela limpa, quantas vezes eles aparecem e quais as posições em que eles estão armazenados no vetor
//Entrada: 80 elementos e numero para comparacao
//saida: numero e posicoes de elemento iguais 
#include<stdio.h>
int main(void){
	float salario[9], maior=0,menor=0;
	int matricula[9], i;
	
	for(i=0;i<=9;i++){
		printf("Insira a matricula do funcionario: ");
		scanf("%d",&matricula[i]);
		printf("Insira o valor do salario: ");
		scanf("%f",&salario[i]);
		if(salario[i]>=maior){
			maior=salario[i];	
		}else{
			if(salario[i]<maior){
				menor=salario[i];
			}
		}
	}

	for(i=0;i<=9;i++){
		printf("\nMatricula do Funcionario %d = %d",i+1,matricula[i]);
		printf("\nSalario do Funcionario %d = %f",i+1,salario[i]);
	}
	printf("O maior salario da empresa e de: %.2f",maior);
	printf("O menor salario da empresa e de: %.2f",menor);
	
	return 0;
}