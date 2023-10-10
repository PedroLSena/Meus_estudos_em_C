/******************************************************************************

A) Crie um registro do tipo Aluno que possua os seguintes atributos: nome, rg e
matrícula (todos strings com tamanho 50, 20 e 5 respectivamente) e semestre
(inteiro). 

B) Crie um registro do tipo Notas que possua os seguintes atributos: nota1, nota2 e
nota3 (todos float). 

C) Adicione mais um atributo em Aluno, notas do tipo Notas. 

D) Crie uma função chamada cadastroAluno que deve solicitar o nome, rg, matricula e
semestre. Você deve armazenar em um registro e armazenar isso no array chamado
listaDeAlunos (dica: listaDeAlunos deve ser passado como parâmetro). 

E) Crie um função chamada cadastroNota que deve solicitar o número de matricula
do aluno e as notas. Você deve armazenar as notas em uma registro do tipo Nota e
atribuir este registro ao respectivo Aluno (Dica: faça uma busca no array
listaDeAlunos em busca da matricula).

F) Crie uma função exibeLista que deve exibir os dados dos alunos no seguinte
formato (atenção para o cálculo da média ponderada: peso2, peso3 e peso5). A nota
para aprovação é 6)

G) Na main, crie um menu que peça a ação ao usuário: 1 - Cadastrar alunos 2, cadastrar Notas, 3 Exibir Lista. Para cada opção faça a chamada da função respectiva
criada anteriormente. Ao fim de todas as funções, deve-se voltar ao menu.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

#define MAX_ALUNOS 100

// Definindo o registro do tipo Notas
struct Notas {
    float nota1;
    float nota2;
    float nota3;
};

// Definindo o registro do tipo Aluno
struct Aluno {
    char nome[50];
    char rg[20];
    char matricula[6];
    int semestre;
    struct Notas notas;
};

// Função para cadastrar um novo aluno
void cadastroAluno(struct Aluno listaDeAlunos[], int *numAlunos) {
    if (*numAlunos >= MAX_ALUNOS) {
        printf("Limite de alunos atingido!\n");
        return;
    }

    struct Aluno novoAluno;
    printf("Digite o nome do aluno: ");
    scanf(" %49[^\n]", novoAluno.nome);
    printf("Digite o RG do aluno: ");
    scanf(" %19s", novoAluno.rg);
    printf("Digite a matrícula do aluno: ");
    scanf(" %5s", novoAluno.matricula);
    printf("Digite o semestre do aluno: ");
    scanf("%d", &novoAluno.semestre);

    listaDeAlunos[*numAlunos] = novoAluno;
    (*numAlunos)++;
}

// Função para cadastrar as notas de um aluno
void cadastroNota(struct Aluno listaDeAlunos[], int numAlunos) {
    char matricula[6];
    printf("Digite o número de matrícula do aluno: ");
    scanf(" %5s", matricula);

    for (int i = 0; i < numAlunos; i++) {
        if (strcmp(listaDeAlunos[i].matricula, matricula) == 0) {
            printf("Digite a nota 1: ");
            scanf("%f", &listaDeAlunos[i].notas.nota1);
            printf("Digite a nota 2: ");
            scanf("%f", &listaDeAlunos[i].notas.nota2);
            printf("Digite a nota 3: ");
            scanf("%f", &listaDeAlunos[i].notas.nota3);
            return;
        }
    }

    printf("Aluno não encontrado com essa matrícula!\n");
}

// Função para exibir a lista de alunos
void exibeLista(struct Aluno listaDeAlunos[], int numAlunos) {
    printf("Lista de Alunos:\n");
    for (int i = 0; i < numAlunos; i++) {
        float mediaPonderada = (listaDeAlunos[i].notas.nota1 * 2 + listaDeAlunos[i].notas.nota2 * 3 + listaDeAlunos[i].notas.nota3 * 5) / 10;
        printf("Nome: %s, Matrícula: %s, Média Ponderada: %.2f, Situação: %s\n", listaDeAlunos[i].nome, listaDeAlunos[i].matricula, mediaPonderada, mediaPonderada >= 6 ? "Aprovado" : "Reprovado");
    }
}

int main() {
    struct Aluno listaDeAlunos[MAX_ALUNOS];
    int numAlunos = 0;
    int opcao;

    while (1) {
        printf("\nMenu:\n");
        printf("1 - Cadastrar alunos\n");
        printf("2 - Cadastrar Notas\n");
        printf("3 - Exibir Lista\n");
        printf("0 - Sair\n");
        printf("Digite o número da opção desejada: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastroAluno(listaDeAlunos, &numAlunos);
                break;
            case 2:
                cadastroNota(listaDeAlunos, numAlunos);
                break;
            case 3:
                exibeLista(listaDeAlunos, numAlunos);
                break;
            case 0:
                printf("Saindo...\n");
                return 0;
            default:
                printf("Opção inválida! Tente novamente.\n");
                break;
        }
    }

    return 0;
}
