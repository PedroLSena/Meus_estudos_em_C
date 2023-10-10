/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){
int n1, n2, i;

printf("digite um numero:");
scanf("%d", &n1);

for(i=2;i<=10;i++){
    printf("digite o proximo numero:");
    scanf("%d", &n2);
    if(n2>n1){
        n1=n2;
    }
}
    printf("o maior numero é:""%d", n1);

}
