/******************************************************************************

Faça um programa que leia 2 valores inteiros e chame uma o que receba estas 2 variáveis e
troque o seu conteúdo do, ou seja, esta funçao é chamada passando duas variáveis A e B por
exemplo e, após a excução o da funçao, A contera ́o valor de B e B tera ́o valor de A.

*******************************************************************************/

#include <stdio.h>

int troca(int x, int y){
    

        int *ponteirox = &x;
        int *ponteiroy = &y;
        
        *ponteirox = x;        
        *ponteiroy = y;

        printf("valor de b em a: %d", *ponteiroy);
        printf("\n");
        printf("valor de a em b: %d", *ponteirox);
    
    
}


int main(){
    int a, b;
    
    printf("Digite um valor a: ");
    scanf("%d", &a);
    
    printf("Digite um valor b: ");
    scanf("%d", &b);
    
    troca(a,b);
 
}
