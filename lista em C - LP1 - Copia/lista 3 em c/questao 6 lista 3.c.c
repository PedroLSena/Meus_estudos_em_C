/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int main()
{
  int x;

  printf("digite um numero:");
  scanf("%d", &x);

  if (x % 2 == 0) {
    printf("o numero digitado  Ã© par");
  } else {
    printf("o numero digitado  Ã© impar");
  }
}
