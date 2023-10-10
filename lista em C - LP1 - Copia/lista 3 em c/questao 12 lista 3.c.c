/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int main()
{
    float res, valor1, valor2;
    char op;
    printf("digite o primeiro valor: ");
    scanf("%f", &valor1);
    printf("digite o segundo valor: ");
    scanf("%f", &valor2);
    
    printf("digite a operacao a ser realizada:");
    scanf("%s", &op);
        
     if (op == '+') {
        res = valor1 + valor2;
    } else if (op == '-') {
        res = valor1 - valor2;
    } else if (op == '*') {
        res = valor1 * valor2;
    } else if (op == '/') {
        if (valor2 == 0) {
            printf("operacao invalida");
            return 1;
        } else {
            res = valor1 / valor2;
        }
    } else {
        printf("operacao invalida");
        return 1;
    }

    printf("o resultado Ã©:""%f", res);

    return 0;
}