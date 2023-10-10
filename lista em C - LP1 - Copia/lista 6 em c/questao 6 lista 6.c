//diferente. Escreva um programa em C que solicita 10 números ao usuário, através de um
//laço while, e ao final mostre qual destes números é o maior.

#include <stdio.h>

int main()
{
    int num, nummax; 
    int contador=1;
    
    while(contador<=5){
        
        printf("digite um numero:");
        scanf("%d", &num);
        
        if(num>nummax){
            nummax=num;
        }
        
        contador++;
        
}
        printf("maior numero:""%d", nummax);
}