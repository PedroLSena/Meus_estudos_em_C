#include <stdio.h>

const int vet_tam = 10;

int main() {
    int numeros[vet_tam],busca_num, j;
    int busca = 0;

    printf("informe 10 numeros:\n");
    for (j = 0; j < vet_tam; j++) {
        printf("numero %d: ", j + 1);
        scanf("%d", &numeros[j]);
    }

    printf("informe o numero a ser encontrado: ");
    scanf("%d", &busca_num);

    for (j = 0; j < vet_tam; j++) {
        if (numeros[j] == busca_num) {
            busca = 1;
            break;
        }
    }

    if (busca) {
        printf("o nmero %d esta no vetor.\n", busca_num);
    } else {
        printf("O número %d não esta no vetor\n", busca_num);
    }

    return 0;
}
