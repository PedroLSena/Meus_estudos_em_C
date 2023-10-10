



//Escreva um programa que leia a nota final um nÃºmero determinada de alunos, e//
//escreva na tela a situaÃ§Ã£o vde cada um. â€œAPROVADOâ€ se NF >= 7; â€œEM EXAMEâ€ se 4 <= NF <//
//7; â€œREPROVADOâ€ se NF < 4. O programa deve ser encerrado se for digitada uma nota final//
//fora do intervalo entre 0 e 10.//


#include <stdio.h>

int main()
{
    int nf,i,num_al;
    
    printf("digite o numero de alunos:");
    scanf("%d",&num_al);
    
    for(i=0;i<num_al;i++){
    if((nf <= 10) && (nf >= 0)){
       
        printf("digite sua nota final do aluno:");
        scanf("%d", &nf);

        if(nf >=7 ){
            printf(":aprovado\n");
        }else if(nf>=4){
             printf("em exame\n");
        }else if(nf<4){
             printf("reprovado\n");
        }
   }else{
        printf("nota nao atende ao que foi pedido");
   }
} 
}
