
#include <stdio.h>

int main()
{
    int i, num, contador=0;
    
    printf("digite os valores\n");
    for(i=0;i<10;i++){
        scanf("%d",&num);
        if (num > 0) {
            contador++;
        }
    }
    printf("numero de valores positivos:""%d",contador);
}
