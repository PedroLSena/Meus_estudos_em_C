/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
//ler o peso do cachorro em kilos//
//ler o peso da embalagem em kilos//
// relacao da quantidade de racao//
//5kg--60g//
//entre (6kg--10kg)--95g//
//entre (11kg--15kg)--135g//
//entre (16kg--20kg)--170g//
//acima de 21 kg--215g//
#include <stdio.h>

int main() {
    float peso_cac, peso_rac;
    int val_d, dur_rac, pes_g;

    printf("Informe o peso do cachorro em quilos:");
    scanf("%f", &peso_cac);
    printf("Informe o peso da embalagem de ração em quilos:");
    scanf("%f", &peso_rac);
    
    pes_g=peso_rac*1000;
    
    switch ((int) peso_cac) {
        case 0 ... 5:
            val_d = 60;
            break;
        case 6 ... 10:
            val_d = 95;
            break;
        case 11 ... 15:
            val_d = 135;
            break;
        case 16 ... 20:
            val_d = 170;
            break;
        default:
            val_d = 215;
            break;
    }
    dur_rac = pes_g / (peso_cac * val_d);

    printf("a quantidade em dias qu eo pacote ira durar:""%d", dur_rac);

    return 0;
}
