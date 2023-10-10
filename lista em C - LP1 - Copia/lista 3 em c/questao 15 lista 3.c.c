/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>



int main()
{
    int val, valn5, valn10, valn50, valn100, valn1;
    
    printf("digite um valor em reias a ser decomposto:");
    scanf("%d",&val);
    
    valn100= val/100;
    val=val % 100;
    valn50= val/50;
    val=val%50;
    valn10= val/10;
    val=val%10;
    valn5= val/5;
    val=val%5;
    valn1 = val;
    
    printf("o valor em notas de 1 real:""%d", valn1);
    printf(",o valor em notas de 5 reais:""%d", valn5);
    printf(",o valor em notas de 10 reais:""%d", valn10);
    printf(",o valor em notas de 50 reais:""%d", valn50);
    printf(",o valor em notas de 100 reais:""%d", valn100);
}
