//Uma fábrica tem um vendedor que recebe uma comissão calculada a partir do número
//de itens de um pedido, segundo os seguintes critérios:
//• para pedidos com menos de 20 itens, a comissão é de 10% do valor total do pedido;
//• para pedidos de 20 a 49 itens, a comissão é de 15% do valor total do pedido;
//• para pedidos de 50 a 74 itens, a comissão é de 20% do valor total do pedido;
//• para pedidos iguais ou superiores a 75 itens, a comissão é de 25%.
//Escreva um programa que processe N pedidos vinculados a esse vendedor (N deve ser lido,
//portanto). Para cada pedido o programa deve ler a quantidade de itens vendidos e o valor
//total. O programa deve informar:
//• A soma total das comissões;
//• A média de itens vendidos;
//• Porcentagem de pedidos com menos de 20 itens.


#include <stdio.h>

int main() {
    int n_ped,quant_it, vt;
    int com,acum_com = 0;
    int acum_it = 0;
    int num_ped_20 = 0;
    
    printf("numero de pedidos:");
    scanf("%d", &n_ped);

    for(int i = 0; i < n_ped; i++){
        
        printf("quantidade de itens:\n");
        scanf("%d", &quant_it);
        printf("total:\n");
        scanf("%d", &vt);

        if(quant_it < 20){
            com= vt*0.1;
            num_ped_20++;
        }else if (quant_it >= 20 && quant_it <= 49){
            com= vt*0.15;
        }else if (quant_it >= 50 && quant_it <= 74){
            com= vt*0.2;
        }else {
            com= vt*0.25;
        }
        acum_com += com;
        acum_it += quant_it;
    }

    float media_itens = (float)acum_it / n_ped;

    float num_ped_20_porc = (float)num_ped_20 / n_ped * 100;

    printf("Soma total das comissões: %d\n", acum_com);
    printf("Média de itens vendidos: %.2f\n", media_itens);
    printf("Porcentagem de pedidos com menos de 20 itens: %.2f%%\n", num_ped_20_porc);

}
