//Escreva um programa em C que solicita 10 números ao usuário, através de um laço
//while, e ao final mostre os dois maiores números digitados pelo usuário.

#include <stdio.h>

int main()
{
    int num, nummax1, nummax2; 
    int contador=1;
    
    while(contador<=5){
        
        printf("digite um numero:");
        scanf("%d", &num);
        
        if(num>nummax1){
            nummax1=nummax2;
            nummax1=num;
        } else if(num > nummax2){
            nummax2=num;
            }
        
        contador++;
        
}
        printf(" primeiro maior numero:""%d\n", nummax1);
        printf(" segundo maior numero:""%d\n", nummax2);
}