/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    //leia o valor que cada passoa investiu e de um valor resposta proporcional ao que cada um investiu//
    //valor ganho no total//
    //valor apostado por cada amigo: amigo1=amg1, amigo2=amg2, amigo3=amg3//
    //somar o valor que cada um apostou e declarar como equivalente a 100%//
    //repartir o valor total de acordo com a porcentagem que cada uma postou//
    //valor em proporcao: valor do amigo1=vl_amg1, valor do amigo2=vl_amg2, valor do amigo3=vl_amg3//
    
    float premio, amg1, amg2, amg3, vl_amg1, vl_amg2, vl_amg3,total, ttl_vl_amg1, ttl_vl_amg2, ttl_vl_amg3;
    printf("valor apostado pelo amigo 1:");
    scanf("%f", &amg1);
    printf("valor apostado pelo amigo 2:");
    scanf("%f", &amg2);
    printf("valor apostado pelo amigo 3:");
    scanf("%f", &amg3);
    printf("valor do premio:");
    scanf("%f", &premio);

    total = amg1 + amg2 + amg3;
    vl_amg1 = amg1 / total;
    vl_amg2 = amg2 / total;
    vl_amg3 = amg3 / total;

    ttl_vl_amg1 = premio * vl_amg1;
    ttl_vl_amg2 = premio * vl_amg2;
    ttl_vl_amg3 = premio * vl_amg3;

    printf("O apostador 1 recebe: %f\n", ttl_vl_amg1);
    printf("O apostador 2 recebe: %f\n", ttl_vl_amg2);
    printf("O apostador 3 recebe: %f\n", ttl_vl_amg3);
} 
