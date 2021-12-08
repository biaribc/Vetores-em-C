//Síntese
//Objetivo: Escrever um programa que declare um vetor de reais e leia as notas de n alunos.
//Entrada: Notas ;
//Saída: - ;

#include <stdio.h>
int main(void){
    int i,n;
    
    printf("Declare o numero de alunos da turma:\n ");
    scanf("%i",&n);
    float nota[n];

    if(n<=50){
    for(i=0;i<=(n-1);i++){
        printf("Insira a nota do aluno numero %d: \n",i+1);
        scanf("%f",&nota[i]);
        
        if(nota[i]<0 || nota[i]>10){
            printf("Nota Invalida!\n");
            i--;
        }
    }}else{
        printf("Numero de alunos invalidos! Turmas podem ter no máximo 50 alunos!");
    }
    return 0;
}