#include <stdio.h>

int main() {
    int tam;
    
    printf("informe o tamanho do vetor: ");
    scanf("%d", &tam);
    
    int vetor[tam];
    
    printf("informe o valor no vetor:\n");
    for (int j = 0; j < tam; j++) {
        printf("Elemento %d: ", j + 1);
        scanf("%d", &vetor[j]);
    }
    
    int val;
    printf("informe o valor para a procura: ");
    scanf("%d", &val);
    
    int local = -1;
    
    for (int j = 0; j < tam; j++) {
        if (vetor[j] == val) {
            local = j;
            break;
        }
    }
    
    if (local != -1) {
        printf("o valor %d esta na posicao %d do vetor\n", val, local);
    } else {
        printf("o valor nao foi encontrado\n");
    }
    
    return 0;
}
