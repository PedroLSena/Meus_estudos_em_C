

//Na UNIFACS foram entrevistados 500 alunos. De cada um deles foram colhidas as
//seguintes informações: o código do curso que frequenta (1-engenharia; 2-computação; 3-
//matemática) e a idade. Faça um programa que processe estes dados e que forneça as
//seguintes informações:
//a) número de alunos por curso;
//b) número de alunos com idade entre 20 e 25 anos, por curso;
//c) o curso com o aluno mais velho e a idade deste aluno, e
//d) o curso com menor média de idade.

#include <stdio.h>

int main()
{
    int curso, idade,i;
    int cont_mat=0, cont_eng=0, cont_comp=0;
    int cont_mat_id=0,cont_eng_id=0,cont_comp_id=0;
    int al_vel=0,id_al_m_vel;
    int n_al_eng=0,n_al_comp=0,n_al_mat=0;
    int id_med_eng=0,id_med_comp=0,id_med_mat=0;
    int som_id_eng=0,som_id_comp=0,som_id_mat=0;
    
    for(i=0;i<500;i++){
        printf("informe seu curso:");
        scanf("%d",&curso);
        printf("informa sua idade:");
        scanf("%d",&idade);
    if(curso == 1){
        cont_eng++;
        som_id_eng+=idade;
        n_al_eng++;
    }else if(curso == 2){
        cont_comp++;
        som_id_comp+=idade;
        n_al_comp++;
    }else if(curso == 3){
        cont_mat++;
        som_id_mat+=idade;
        n_al_mat++;
    }
    
    if((curso==1)&&(idade>20)&&(idade<25)){
        cont_eng_id++;
    }else if((curso==2)&&(idade>20)&&(idade<25)){
        cont_comp_id++;
    }else if((curso==3)&&(idade>20)&&(idade<25)){
        cont_mat_id++;
    }
    
    if(idade>id_al_m_vel){
        id_al_m_vel=idade;
        al_vel=curso;
    }
    
    float id_med_eng_eng = (float)som_id_eng / n_al_eng;
    float id_med_comp = (float)som_id_comp / n_al_comp;
    float id_med_mat = (float)som_id_mat / n_al_mat;
}
    printf("alunos que fazem engenharia:""%d\n",cont_eng);
    printf("alunos que fazem computacao:""%d\n",cont_comp);
    printf("alunos que fazem matematica:""%d\n",cont_mat);
    
    printf("alunos entre 20 e 25 que cursam engenharia:""%d\n",cont_eng_id);
    printf("alunos entre 20 e 25 que cursam computacao:""%d\n",cont_comp_id);
    printf("alunos entre 20 e 25 que cursam matematica:""%d\n",cont_mat_id);
    
        printf("curso com o aluno mais velho e sua idade:\n");
    switch (al_vel) {
        case 1:
            printf("engenharia,idade:%d\n", al_vel);
            break;
        case 2:
            printf("computacao,idade:%d\n", al_vel);
            break;
        case 3:
            printf("matematica,idade:%d\n", al_vel);
            break;

        }
        printf("curso com menor media em idade:\n");
        if (id_med_eng <= id_med_comp && id_med_eng <= id_med_mat) {
            printf("engenharia\n");
        } else if (id_med_comp <= id_med_eng && id_med_comp <= id_med_mat) {
            printf("computação\n");
        } else {
            printf("matematica\n");
    }
}
