/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int main()
{
   {
  int x, y, x1=0, y2=0;

    printf("digite um numero x:");
    scanf("%d", &x);

    printf("digite um numero x:");
    scanf("%d", &y);

  for (int i = 1; i < x1; i++) {
    if (x % i == 0) {
      x1 += i;
    }
  }
  for (int i = 1; i < y2; i++) {
    if (y % i == 0) {
      y2 += i;
    }
  }
  if (x == x1 && y == y2) {
    printf("os numeros digitados sao divisores perfeitos");
  } else {
    printf("os numeros digitados nao sao divisores perfeitos");
  }
   }
}
