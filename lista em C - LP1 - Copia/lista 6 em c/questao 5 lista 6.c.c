//Escreva um programa que pergunte ao usuário quantos alunos tem na sala dele. Em
//seguida, através de um laço while, pede ao usuário para que entre com as notas de todos os
//alunos da sala, um por vez. Por fim, o programa mostra a média aritmética da turma.


#include <stdio.h>

int main()
{
    int alunos,quant_notas,nota_al, total_notas=0, contador=1;
    float media;
    
    printf("quantos alunos tem na sala?:");
    scanf("%d", &alunos);
    
    while(contador <=alunos){
        
        printf("nota do aluno?:");
        scanf("%d", &nota_al);
        total_notas+=nota_al;
        contador++;
        
    }
        media=(total_notas/alunos);
        printf("media dos alunos: %f", media);
}
