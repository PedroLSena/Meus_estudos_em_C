/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int sal;
    float reajuste;
    printf("digite o salario a ser calculado: ");
    scanf("%d",&sal);
    
    if(sal>500){
        reajuste=sal*1.15;
        printf("o valor com reajuste:""%f", reajuste);
    }else if(sal<500 && sal>1000){
        reajuste=sal*1.8;
        printf("o valor com reajuste:""%f", reajuste);
    }else {
        reajuste=sal*1.3;
        printf("o valor com reajuste:""%f", reajuste);
    }
}
