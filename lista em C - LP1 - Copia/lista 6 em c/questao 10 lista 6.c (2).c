//Escreva um programa que pergunta um nÃºmero ao usuÃ¡rio e mostra sua tabuada
//completa (de 1 atÃ© 10).

#include <stdio.h>

int main()
{
    int num,res,i;
    float res_div;
    int contador=1;
    printf("escolha um numero :");
    scanf("%d",&num);
    
    for(i=1;i<=10;i++){
            res=i*num;
            printf("\n%dx%d:%d\n",i,num,res);
            res=i+num;
            printf("%d+%d:%d\n",i,num,res);
            res=i-num;
            printf("%d-%d:%d\n",i,num,res);
             res_div=i/num;
            printf("%d/%d:%f\n\n",i,num,res_div);
    }
}