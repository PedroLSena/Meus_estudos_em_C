/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


//ler idade e imprimir em meses e dias//
int main()
{
    int id, ida, idm, d;
    printf("digite sua idade:");
    scanf("%d", &id);
    
    ida = id / 365;
    id = id % 365;
    
    idm = id / 30;
    id = id % 30;
    
    d=id;
    
    printf("sua idade em dias:""%d", d);
    printf(",sua idade em anos:""%d", ida);
    printf(",sua idade em meses.:""%d", idm);
}
