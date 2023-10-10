#include <stdio.h>

int main() {
    int v;
    
    printf("informe o numero de valores: ");
    scanf("%d", &v);
    
    float vetor[v];
    
    printf("informe os valores do vetor:\n");
    for (int j = 0; j < v; j++) {
        printf("Elemento %d: ", j + 1);
        scanf("%f", &vetor[j]);
    }
    
    float maior = vetor[0];
    
    for (int j = 1; j < v; j++) {
        if (vetor[j] > maior) {
            maior = vetor[j];
        }
    }
    
    printf("o maior valores entre os numeros e : %f\n", maior);
    
    return 0;
}
