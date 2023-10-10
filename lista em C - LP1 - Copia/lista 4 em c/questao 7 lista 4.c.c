/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   float val1, val2, res;
    char op;

    printf("digite o primeiro valor: ");
    scanf("%f", &val1);

    printf("digite o segundo valor: ");
    scanf("%f", &val2);

    printf("escolha entre uma das seguntes operacoes:adicao, subtracao, multiplicacao, divisao \n");
    scanf(" %c", &op);

 switch (op) {
        case 'a':
            res = val1 + val2;
            printf("Resultado da soma:""%f", res);
            break;
        case 'm':
            res = val1 * val2;
            printf("Resultado da multiplicacao:""%f", res);
            break;
        case 'd':
            res = val1 / val2;
            printf("Resultado da divisao:""%f", res);
            break;
        case 's':
            res = val1 - val2;
            printf("Resultado da subtracao:""%f", res);
            break;
        default:
            printf("Operacao invalida!");
    }
}
