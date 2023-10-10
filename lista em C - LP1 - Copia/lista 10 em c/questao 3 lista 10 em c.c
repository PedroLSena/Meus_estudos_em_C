/******************************************************************************



*******************************************************************************/

#include <stdio.h>

int main(){
    
    int vetor[5];
    int i;
    
    int *ponteiroInv = vetor;


for(i=0;i<5;i++){
    printf("Digite valores para o vetor:");
//    scanf("%d", &vetor[i]);
    scanf("%d",ponteiroInv + i);
}

printf("Valores do vetor:");

for(i=0;i<5;i++){
    printf(" %d", vetor[i]);
}

printf("\n");
printf("Valores do vetor x2:");

for(i=0;i<5;i++){
    printf("%d ", *(ponteiroInv + i)*2);
}

}
