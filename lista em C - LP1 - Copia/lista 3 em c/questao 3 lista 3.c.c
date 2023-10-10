/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>



int main()
{
    int x, y;
    printf("digite um valor x:");
    scanf("%d", &x);
    printf("digite um valor y:");
    scanf("%d", &y);
    if (x<y) {
      printf("o valor y Ã© maior que o valor x");
    }
    else{
      printf("o valor x Ã© maior que o valor y");
  }
}
