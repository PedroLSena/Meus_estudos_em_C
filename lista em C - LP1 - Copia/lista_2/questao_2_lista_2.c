/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float r, d;
    printf("informe a quantidade de reais");
    scanf("%f", &r);
    //valor do dolar no momento que estou fazendo a questao:"1 Real brasileiro igual a 0,20 Dólar americano", 18 de abr., 21:29 UTC · Fontes//
    d=(r*5);
    printf("valor de real para dolar é:" "%f", d);
} 
