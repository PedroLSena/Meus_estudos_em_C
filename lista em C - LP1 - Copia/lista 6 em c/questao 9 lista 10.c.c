//Escreva um programa que lÃª o tamanho do lado de um quadrado e imprime um
//quadrado daquele amanho com asteriscos. Seu programa deve funcionar para quadrados
//com lados de todos os tamanhos entre 1 e 20. Para lado igual a 5:

#include <stdio.h>

int main()
{
    int num, i,j, u, l;
    
    printf("largura do quagrado:");
    scanf("%d",&num);
if(num<20){
    for(j=1;j<=num;j++){
        printf(" * ");
    }
    printf("\n");
    
    for(j=2;j<num;j++){
        
        printf(" * ");
        
        for(l=2;l<=num;l++){
           printf("  ");
        }
        printf(" *\n");
    }
    
    for(j=1;j<=num;j++){
        printf(" * ");
    }
}else{
    printf("valor escolhodo maior que 20");
}
}