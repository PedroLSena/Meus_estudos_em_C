/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){
    
int idd, idi;
float alt;

printf("informe a idade da candidata: \n");
scanf("%d", &idd);
printf("informe a altura da candidata: \n");
scanf("%f", &alt);
printf("informe a quantidade de idiomas que a candidata é fluente: \n");
scanf("%d", &idi);
if(idd >= 24 && alt >= 1.70 && idi >=2) {
    printf("apta para a vaga\n");
}else{
    printf("a candidata nao esta apta para a funcao\n");
        }

return 0;
}
