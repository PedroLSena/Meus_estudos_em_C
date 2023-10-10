#include <stdio.h>
#include <stdlib.h>

#define VZ ' '
#define JA 'A'
#define JB 'V'
#define LGO 'x'


int casB(int x, int y, char tab[10][10]) {
    return (x >= 0 && x < 10 && y >= 0 && y < 10 && tab[y][x] == VZ);
}


int casOP(int x, int y, char tab[10][10], char cps) {
    return (tab[y][x] == (cps == JA ? JB : JA));
}

int todosSaposBloqueados(int *posX, int *posY, char *simb, char tab[10][10]) {
    int dx[] = {0, 0, -1, 1, -1, 1, -1, 1};
    int dy[] = {-1, 1, 0, 0, -1, -1, 1, 1};

    for (int i = 0; i < 5; i++) {
        int bloqueado = 1;

        for (int j = 0; j < 8; j++) {
            int adjX = posX[i] + dx[j];
            int adjY = posY[i] + dy[j];

            if (casB(adjX, adjY, tab) || casOP(adjX, adjY, tab, simb[i])) {
                bloqueado = 0;
                break;
            }
        }

        if (bloqueado) {
            return 1;
        }
    }

    return 0;
}

int main() {
    char tab[10][10];
    int jgsA_posX[5];
    int jgsA_posY[5];
    int jgsB_posX[5];
    int jgsB_posY[5];
    char jgsA_simb[5];
    char jgsB_simb[5];
    int ptsA = 0;
    int ptsB = 0;
    int jgAtual = 0; 

   
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tab[i][j] = VZ;
        }
    }
    int posLgoX = 4;
    int posLgoY = 5;

   
    for (int i = 0; i < 5; i++) {
        jgsA_posX[i] = i * 2 + 1;
        jgsA_posY[i] = 0;
        jgsA_simb[i] = JA;
        tab[jgsA_posY[i]][jgsA_posX[i]] = JA;
    }


    for (int i = 0; i < 5; i++) {
        jgsB_posX[i] = i * 2 + 1;
        jgsB_posY[i] = 10 - 1;
        jgsB_simb[i] = JB;
        tab[jgsB_posY[i]][jgsB_posX[i]] = JB;
    }

    int spsA = 0;
    int spsB = 0;
    int ganhador = -1;

    while (1) {
        system("clear");

 
        printf("   0  1  2  3  4  5  6  7  8  9\n");
        for (int i = 0; i < 10; i++) {
            printf("%d  ", i);
            for (int j = 0; j < 10; j++) {
                printf("%c |", tab[i][j]);
            }
            printf("\n");
        }

        int indSapo;
        printf("jogador %c,escolha um sapo (0-4): \n", (jgAtual == 0) ? JA : JB);
        scanf("%d", &indSapo);

        int* posX;
        int* posY;
        char* simb;

        if (jgAtual == 0) {
            posX = jgsA_posX;
            posY = jgsA_posY;
            simb = jgsA_simb;
        } else {
            posX = jgsB_posX;
            posY = jgsB_posY;
            simb = jgsB_simb;
        }

        int saposBloqueados = 0;
        if (jgAtual == 0) {
            saposBloqueados = todosSaposBloqueados(jgsA_posX, jgsA_posY, jgsA_simb, tab);
        } else {
            saposBloqueados = todosSaposBloqueados(jgsB_posX, jgsB_posY, jgsB_simb, tab);
        }

        if (saposBloqueados) {
            printf("fim de jogo\n");
            printf("todos os sapos do jogador %c estao bloqueados ou cairam no lago. O jogo terminou em empate.\n", (jgAtual == 0) ? JA : JB);
            return 0;
        }

        printf("digite a coluna para mover o sapo (0 - 9): ");
        int colunaDestino;
        scanf("%d", &colunaDestino);
        getchar();

        printf("digite a linha para mover o sapo (0 - 9): ");
        int linhaDestino;
        scanf("%d", &linhaDestino);
        getchar();

        int proximaPosX = posX[indSapo];
        int proximaPosY = posY[indSapo];
        
        int dx[] = {0, 0, -1, 1, -1, 1, -1, 1};
        int dy[] = {-1, 1, 0, 0, -1, -1, 1, 1};

        if (colunaDestino== posLgoX && linhaDestino== posLgoY) {
            printf("jogador %c, seu sapo entrou no lago, desapareceu\n", simb[indSapo]);
            tab[proximaPosY][proximaPosX] = VZ;
            jgAtual = (jgAtual + 1) % 2;
            printf("aperte enter para continuar...\n");
            getchar();
            continue;
        } else {
            int difColuna = abs(colunaDestino - proximaPosX);
            int difLinha = abs(linhaDestino - proximaPosY);
        
            if ((difColuna == 1 && difLinha == 0) || (difColuna == 0 && difLinha == 1) || (difColuna == 1 && difLinha == 1)) {
               
                int adjacentePreso = 0;
                for (int i = 0; i < 8; i++) {
                    int adjX = proximaPosX + dx[i];
                    int adjY = proximaPosY + dy[i];
        
                    if (casOP(adjX, adjY, tab, simb[indSapo])) {
                        int oppX = adjX + dx[i];
                        int oppY = adjY + dy[i];
        
                        if (casB(oppX, oppY, tab)) {
                            adjacentePreso = 1;
                            break;
                        }
                    }
                }
                if (adjacentePreso) {
                    printf("movimento invalido, os sapos estao bloqueados\n");
                    printf("aperte enter para continuar...\n");
                    getchar();
                } else {
                    tab[proximaPosY][proximaPosX] = VZ;
                    posX[indSapo] = colunaDestino;
                    posY[indSapo] = linhaDestino;
                    tab[linhaDestino][colunaDestino] = simb[indSapo];
                }
            } else {
                printf("movimento invalido,o sapo so pode se mover a apartir da posicao atual.\n");
                printf("aperte enter para continuar...\n");
                getchar();
            }
        }
        
        
        
        jgAtual = (jgAtual + 1) % 2;
        
        printf("aperte enter para continuar...\n");
        getchar();

        int saposA_no_lago = 0;
        int saposB_no_lago = 0;

        for (int i = 0; i < 5; i++) {
            if (jgsA_posY[i] == 10 - 1) {
                saposA_no_lago++;
            }
            if (jgsB_posY[i] == 0) {
                saposB_no_lago++;
            }
        }

        if (saposA_no_lago == 5) {
            printf("fim do jogo\n");
            printf("jogador A (azul) venceu! todos os sapos chegaram ao outro lado.\n");
            return 0;
        }

        if (saposB_no_lago == 5) {
            printf("fim do jogo!\n");
            printf("jogador B(vermelho)venceu! todos os sapos chegaram ao outro lado.\n");
            return 0;
        }
    }

    printf("fim de jogo!\n");
    printf("pontuacao final:\n");
    printf("jogador A(azul): %d pontos\n", ptsA);
    printf("jogador B(vermelho): %d pontos\n", ptsB);

    return 0;
}