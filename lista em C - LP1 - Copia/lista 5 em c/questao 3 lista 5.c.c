/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i, n1;
    printf("digite um numero n:");
    scanf("%d", &n1);
    
    for(i=2;i<n1;i++){
        if(((i==2) || (i==3) || (i==5) || (i==7))||((i % 2 != 0) && (i % 3 != 0)&& (i % 5 != 0)&&(i % 7 != 0))){
            printf(" e um numemo primo\n""%d",i);
        }
        
    }
}
