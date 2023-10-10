//Professores preocupados com o número de faltas de seus alunos resolveram pedir para
//que esses alunos escrevessem um programa para calcular a média de faltas dos alunos de
//uma determinada turma de 30 alunos. Imagine que você é um aluno dessa turma e tem
//como tarefa escrever tal programa. Esse programa deve ler a quantidade de faltas dos
//alunos dessa turma (permitir a leitura enquanto for digitado um número positivo para a
//quantidade de faltas). Ao final imprimir a quantidade média de faltas e o número de alunos
//que participaram dessa pesquisa.


#include <stdio.h>

int main() {

    int n_al,i;
    int quant_falt_al;
    int cont_falt=0,alunos=0;
    float med_falt;
    
    printf("numero de alunos da turam(questao pede 30):\n");

    for(int i = 0; i < 30; i++){
        
        printf("quantidade de faltas dos alunos:\n");
        scanf("%d", &quant_falt_al);
        alunos++;
       
       cont_falt=quant_falt_al+cont_falt;
       
       med_falt=(float) quant_falt_al/ alunos;
       
            if(cont_falt >= 30){
                printf("exedeu quantidade de faltas:""%d\n",cont_falt);
                printf("alunos que participaram da pesquisa:""%d\n",alunos);
                printf("quantidade media de faltas:""%f",med_falt);
                break;
        }   
    }
}
