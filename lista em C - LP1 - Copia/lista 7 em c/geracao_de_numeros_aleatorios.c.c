#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// geracao de numeros aleatorios

int main()
{
    int vetor[5];
    int i;
    
    srand(time(NULL));
    
    for(i=0;i<5;i++){
        vetor[i] = rand()%10;
//      printf("digite os valores do %d vetor:",i);
//      scanf("%d", &vetor[i]);
    }for(i=0;i<5;i++){
        printf("%d ", vetor[i]);
    }
}
