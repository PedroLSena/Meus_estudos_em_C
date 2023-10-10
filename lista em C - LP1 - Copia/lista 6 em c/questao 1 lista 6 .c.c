//Existe uma música famosa que tem o seguinte formato:

//n patinhos foram passear
//Além das montanhas
//Para brincar
//A mamãe gritou: Quá, quá, quá, quá
//Mas só n-1 patinhos voltaram de lá.

//Que se repete até nenhum patinho voltar de lá.
//Ao final, todos os patinhos voltam:

//A mamãe patinha foi procurar
//Além das montanhas
//Na beira do mar
//A mamãe gritou: Quá, quá, quá, quá
//E os n patinhos voltaram de lá.

//Crie um programa em C que recebe um inteiro positivo do usuário e exibe a música inteira
//na tela, onde o inteiro recebido representa o número inicial n de patinhos que foram
//passear.

#include <stdio.h>

int main()
{
    int i, patinhos, pat;
    
    printf("informe o numero de patinhos:");
    scanf("%d", &patinhos);
    
    pat=patinhos;
    
    for(i=patinhos;i>=0;i--){
        if(i>=1){
        printf("\n%d patinhos foram passear\n", patinhos);
        printf("Além das montanhas\n");
        printf("Para brincar\n");
        printf("A mamãe gritou: Quá, quá, quá, quá\n");
        printf("Mas só %d patinho voltaram de lá.\n", patinhos-1);
        patinhos--;
    }else{
        printf("\nA mamãe patinha foi procurar\n");
        printf("Além das montanhas\n");
        printf("Na beira do mar\n");
        printf("A mamãe gritou: Quá, quá, quá, quá\n");
        printf("E os %d patinhos voltaram de lá.\n", pat);
    
}
}
}