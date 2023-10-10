/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
//dar um valor para a velocidade permitida//
//dar um valor para o veiculo//
// se o veiculo ultrapassar a velocidade permitida em  ate 20%, a multa é de 250 reais//
//se o veiculo ultrapassar os 20% que ja foi ultrapassado a multa é de 750 reais//

int main(){
    
int vel_vei, vel_perm;
float vel20,velex20, vel202;

printf("informe a velocidade do veiculo: \n");
scanf("%d", &vel_vei);

printf("informe a velocidade permitida: \n");
scanf("%d", &vel_perm);

vel20 = (vel_vei*20)/100;
vel202=vel_perm+vel20;

if(vel_vei > vel_perm && vel_vei < vel202){
    printf("o condutor deve pagar 250 reais");
}else if(vel_vei > vel202){
    printf("o condutor deve pagar 750 reais");
}else {
    printf("o condutor nao paga multa");
}
return 0;
}
