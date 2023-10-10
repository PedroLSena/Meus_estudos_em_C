/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num,i;
    
    printf("escolha um numero :");
    scanf("%d",&num);
    
    for(i=1;i<=num;i++){
        if(i%2!=0){
            printf("numero impar:""%d\n",i);
        }
        
    }for(i=1;i<num;i++){
        if(i%2==0){
            printf("numero par:""%d\n",i);
        }
        
    }
}
