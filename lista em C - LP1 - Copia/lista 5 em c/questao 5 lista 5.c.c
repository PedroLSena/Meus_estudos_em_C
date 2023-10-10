



//Desenvolva um programa que leia o salário de uma pessoa, a quantidade de contas
//(despesas) que uma pessoa precisa pagar em um mês e, para cada conta, leia o valor a ser
//pago. O programa deve somar todos os valores de contas que a pessoa necessita pagar e
//depois verificar se a diferença entre o salário da pessoa e o valor de todas as despesas que
//deve pagar no mês é positiva. Se a diferença (salário – despesas) for positiva imprimir este
//valor da diferença na tela. Se a diferença for negativa imprimir a mensagem “reduzir
//despesas”.//

#include <stdio.h>

int main()
{
    int sal,disp,quantdisp, i, acumulador=0,valort;
    
    printf("digite seu salario\n");
    scanf("%d", &sal);
    
    printf("digite a quantidade de despesas\n");
    scanf("%d", &disp);
    
    for(i=0;i<disp;i++){
        printf("informe a quantidade de cada despesa:\n");
        scanf("%d", &quantdisp);
        acumulador= acumulador+quantdisp;
        valort= sal- acumulador;
    }
    if(valort>0){
            printf("voce possui um saldo positivo de :""%d",valort);
        }else if(valort<0){
            printf("voce possui um saldo negativo");
        }
}
