/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
char esc;
int idade,peso;
printf("voce ira doar sangue!!\n");

printf("digite sua idade? \n");
scanf("%d", &idade);

if (idade >= 18 && idade <= 68) {
    printf("informe seu peso\n");
    scanf("%d", &peso);
        if (peso>=50) {
            printf("voce esta apto a doar sangue\n");
        }else if (peso<=50){
            printf("voce nao esta apto a doar sangue\n");
        }
        
}else {
    printf("voce nao esta apto a doar sangue!\n");
}
return 0;
}
