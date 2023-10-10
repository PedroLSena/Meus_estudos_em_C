/******************************************************************************



*******************************************************************************/


#include <stdio.h>
#include <stdlib.h>

int main() {
    int tam;

    printf("tamanho do array : ");
    scanf("%d", &tam);

    int *array = (int *)malloc(tam * sizeof(int));

    int *ptr = array;
    
    printf("\n");
    
    for (int i = 0; i < tam; i++) {
        printf("valor : ");
        scanf("%d", ptr);
        ptr++;
    }

    ptr = array;
    
    printf("\n");
    
    printf("valores no array : ");
    for (int i = 0; i < tam; i++) {
        printf("%d\n", *ptr);
        ptr++;
    }
}
