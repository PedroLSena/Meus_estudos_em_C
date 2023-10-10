/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float sal, grat, imp, sat1, sat2;
   printf("Digite seu salário:");
   scanf("%f",&sal);
   grat=(sal*5)/100;
   sat1=grat+sal;
   imp=(sat1*7)/100;
   sat2=sat1-imp;
   printf("Seu salário é de:%f\n", sat2);
} 
