#include <stdio.h>

int main() {
    int vetor[20];
    int x, j;

    printf("informe os valores do vetor:\n");
    for (j = 0; j < 20; j++) {
        scanf("%d", &vetor[j]);
    }

    printf("informe o valor de x:");
    scanf("%d", &x);

    for (j = 0; j < 20; j++) {
        if (vetor[j] < x) {
            vetor[j] = x;
        }
    }

    printf("resultado do vetor:\n");
    for (j = 0; j < 20; j++) {
        printf("%d ", vetor[j]);
    }
    printf("\n");

    return 0;
}
