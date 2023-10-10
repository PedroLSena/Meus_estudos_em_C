/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float p, vp, vt;
    printf("informe o valor do produto");
    scanf("%f", &p);
    vp=(p*12)/100;
    vt=p-vp;
    printf("valor do rpoduto com desconto é:" "%f", vt);
} 
