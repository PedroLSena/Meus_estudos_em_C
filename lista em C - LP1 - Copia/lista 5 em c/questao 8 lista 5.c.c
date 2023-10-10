//Escreva um programa que leia as 50 notas de uma avaliação dos alunos que cursam uma
//disciplina de algoritmos, calcule e imprima na tela:
//• quantidade de notas maiores ou iguais a 7;  <--
//• a porcentagem de notas maiores ou iguais a 7;
//• quantidade de notas maiores ou iguais a 4 e menores que 7;  <--
//• a porcentagem de notas maiores ou iguais a 4 e menores que 7;
//• quantidade de notas menores que 4; <--
//• a porcentagem de notas menores que 4;
//• a média da turma na avaliação.


#include <stdio.h>

int main()
{
    int nota, i, acum_7=0, acum_4=0,acum_men_4=0, nota_somada=0;
    float media_turma, por7, por4, por47;
    
    printf("digite o valor das 50 notas\n");
    
    for(i=0;i<50;i++){
        printf("informe o valor de cada nota:\n");
        scanf("%d", &nota);
        
        if(nota>=7){
            acum_7++;
        }else if( (nota>=4) && (nota<7) ){
            acum_4++;
        }else if(nota<4){
            acum_men_4++;
        }
        nota_somada = nota_somada + nota;
        
    }
    
    por7 = (float) acum_7 / 5 * 100;
    por47 = (float) acum_men_4 / 5 * 100;
    por4 = (float) acum_4 / 5 * 100;

    media_turma = nota_somada/5;
    
    printf("notas maior igual a 7: ""%d\n", acum_7);
    printf("notas maiores que 4 e menores que 7: ""%d\n", acum_4);
    printf("notas menores que 4: ""%d\n", acum_men_4);
    printf("media da turma:%f\n",media_turma);
    printf("porcentagem de alunos com nota maior ou igual a 7: %f\n",por7);
    printf("porcentagem de alunos com nota maior que 4 e menor que 7: %f\n",por47);
    printf("porcentagem de alunos com nota menor que 4: %f\n",por4);
}
