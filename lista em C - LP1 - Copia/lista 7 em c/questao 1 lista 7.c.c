#include <stdio.h>

int main() {
    int tam;
    
    printf("informe o tamanho do vetor: ");
    scanf("%d", &tam);
    
    int vetor[tam];
    
    printf("informa um valor para o vetor:\n");
    for (int *p = vetor; p < vetor + tam; p++) {
        printf("vetor %ld: ", p - vetor + 1);
        scanf("%d", p);
    }
    
    int *maior = vetor;
    
    for (int *p = vetor + 1; p < vetor + tam; p++) {
        if (*p > *maior) {
            maior = p;
        }
    }
    
    printf("Maior numero do vetor: %d\n", *maior);
    
    return 0;
}
