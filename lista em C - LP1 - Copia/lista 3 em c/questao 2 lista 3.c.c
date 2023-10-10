/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int x;
    printf("digite o valor da temperatura:");
    scanf("%d", &x);
    if (x<37){
      printf("voce nao possui febre");
    }
    else {
      printf("voce possui febre");
  }
}
