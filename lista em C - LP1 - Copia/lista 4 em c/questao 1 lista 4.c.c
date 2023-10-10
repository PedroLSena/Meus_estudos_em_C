/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
char esc;
printf("pense em um valor entre 1 e 4:\n");

printf("o numero que voce pensou e maior que dois?(digite S para sim e N para nao) \n");
scanf("%s", &esc);

if (esc=='s') {
    printf("o numero pensado e maior que 3?\n");
    scanf("%s", &esc);
        if (esc=='s') {
            printf("o numero pensado e 4\n");
        }else if (esc=='n'){
            printf("o numero pensado nao atende ar regras do desafio\n");
        }
        
}else if (esc=='n') {
    printf("o numero pensado e maior que 1?\n");
    scanf("%s", &esc);
        if (esc=='s') {
            printf("o numero pensado e 2\n");
        }else if (esc=='n'){
            printf("o numero pensado nao atende ar regras do desafio");
        }
}
return 0;
}
