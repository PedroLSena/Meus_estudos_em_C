#include <stdio.h>

int main() {
    int tam;
    
    printf("informe o tamanho do vetor: ");
    scanf("%d", &tam);
    
    int vetor[tam];
    
    printf("informe os valores do vetor:\n");
    for (int j = 0; j < tam; j++) {
        printf("valor %d: ", j + 1);
        scanf("%d", &vetor[j]);
    }
    
    printf("valores pares:\n");
    for (int j = 0; j < tam; j++) {
        if (vetor[j] % 2 == 0) {
            printf("%d ", vetor[j]);
        }
    }
    
    printf("\n");
    
    return 0;
}
