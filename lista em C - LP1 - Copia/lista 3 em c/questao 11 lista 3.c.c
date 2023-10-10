/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int main()
{
    float valdit,valdit1, valimp,valimp1, valtotal, valcar;
    printf("escreva o valor do carro:");
    scanf("%f", &valcar);
    valdit=0.28*valcar;
    valimp=0.45*valcar;
    valtotal=valcar+valdit+valimp;
    printf("a valor total do carro Ã© de""%f",valtotal);
}
