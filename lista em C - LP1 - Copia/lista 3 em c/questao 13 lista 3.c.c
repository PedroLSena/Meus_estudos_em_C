/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>



int main()
{
    int id;
    printf("digite a sua idade:");
    scanf("%d", &id);

    if(id>=5 && id<=7) {
        printf("voce pertense ao grupo infantil A");
    }
    else if(id>=8 && id<=10) {
        printf("voce pertense ao grupo infantil B");
    }
    else if(id>=11 && id<=13) {
        printf("voce pertense ao grupo juvenil A");
    }
    else if(id>=14 && id<=17) {
        printf("voce pertense ao grupo infantil B");
    }
    else if(id>=18) {
        printf("voce pertense ao grupo adulto");
    }
    else {
        printf("voce nao possui a idade para entrar nas aulas de natacao");
    }
}
