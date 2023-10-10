
#include <stdio.h>


// ler a peso de uma pessoa e informar se ela ÃƒÂ© obesa//
// imc=peso/altura*2, se o imc for maior que 30 a pessoa esta obesa//
int main()
{
    float x, y, imc;
    printf("digite um valor referente a altura:");
    scanf("%f", &x);
    printf("informe seu peso:");
    scanf("%f", &y);
    
    //pesquisando na internet descobri que o calculo ÃƒÂ©: peso/altura^2//
    
    imc=y/(x*x);
    printf("seu imc ÃƒÂ© %.2f\n", imc);
    if (imc>30) {
        printf("o usuario esta obeso");
    } 
        else{
            printf("o usuario nao esta obeso");
        }
}
