/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int x;
  x = 1;
  int *ponteiroint = &x;

  char string = 'a';
  char *ponteirochar = &string;

  float y;
  y = 2;
  float *ponteirofloat = &y;
  
    printf("antes:");
     
    printf("\n");
    printf("\n");

    printf ("inteiro : %i\n", x);
    printf ("char : %c\n", string);
    printf ("float : %f\n", y);
     


    *ponteiroint = 10;

    *ponteirofloat = 20;

    *ponteirochar = 'b';
    printf("\n");
    printf("\n");
    
    printf("depois:"); 
    
    printf("\n");
    printf("\n");
    
    printf("inteiro : %i\n", *ponteiroint);
    printf("char : %c\n", *ponteirochar);
    printf("float : %f\n", *ponteirofloat);
    
    

  return 0;
}
