#include <stdio.h>

const int max_cli = 2000;

int main() {
    float limites[max_cli];
    int num_cli, j, num_cli_aumento = 0;

    printf("Numero de clientes:");
    scanf("%d", &num_cli);

    printf("limites dos clientes:\n");
    for (j = 0; j < num_cli; j++) {
        printf("cliente %d: ", j + 1);
        scanf("%f", &limites[j]);
    }

    for (j = 0; j < num_cli; j++) {
        if (limites[j] > 1000.0) {
            limites[j] += limites[j] * 0.2;
            num_cli_aumento++;
        }
    }

    printf("novos limites:\n");
    for (j = 0; j < num_cli; j++) {
        printf("cliente %d: R$%.2f\n", j + 1, limites[j]);
    }

    printf("clientes com aumento no limite: %d\n", num_cli_aumento);

    return 0;
}
