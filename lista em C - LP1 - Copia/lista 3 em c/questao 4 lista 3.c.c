/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


//prova peso 3 e trabalho peso 2 media menor que 7= reprovado//
int main()
{
    int x, y, z, nf;
    printf("digite o valor da primeira prova:");
    scanf("%d", &x);
    printf("digite o valor da segunda prova:");
    scanf("%d", &y);
    printf("digite o valor do trabalho:");
    scanf("%d", &z);
    nf=(x*3+y*3+z*1)/6;
    if (nf>7) {
      printf("aprovado");
    }
    else{
      printf("reprovado");
  }
}
