#include <stdio.h>
#include <conio.h>
#include <windows.h>

#define LARGURA 40
#define ALTURA 20

int main() {

    int bolaX = LARGURA / 2;
    int bolaY = ALTURA / 2;

    int velX = 1;
    int velY = 1;

    int jogador = ALTURA / 2;
    int computador = ALTURA / 2;

    int pontosJogador = 0;
    int pontosCPU = 0;

    while (1) {

        system("cls");

        // Desenha o campo
        for (int y = 0; y < ALTURA; y++) {

            for (int x = 0; x < LARGURA; x++) {

                if (x == 0 || x == LARGURA - 1)
                    printf("|");

                else if (x == bolaX && y == bolaY)
                    printf("O");

                else if (x == 2 &&
                        (y == jogador - 1 ||
                         y == jogador ||
                         y == jogador + 1))
                    printf("#");

                else if (x == LARGURA - 3 &&
                        (y == computador - 1 ||
                         y == computador ||
                         y == computador + 1))
                    printf("#");

                else
                    printf(" ");
            }

            printf("\n");
        }

        printf("\nJogador: %d   CPU: %d\n", pontosJogador, pontosCPU);
        printf("W = subir | S = descer\n");

        // Controles
        if (kbhit()) {
            char tecla = getch();

            if (tecla == 'w' && jogador > 1)
                jogador--;

            if (tecla == 's' && jogador < ALTURA - 2)
                jogador++;
        }

        // IA simples
        if (bolaY < computador)
            computador--;

        if (bolaY > computador)
            computador++;

        // Movimento da bola
        bolaX += velX;
        bolaY += velY;

        // Colisão teto/chão
        if (bolaY == 0 || bolaY == ALTURA - 1)
            velY *= -1;

        // Colisão jogador
        if (bolaX == 3 &&
            (bolaY >= jogador - 1 && bolaY <= jogador + 1))
            velX = 1;

        // Colisão computador
        if (bolaX == LARGURA - 4 &&
            (bolaY >= computador - 1 && bolaY <= computador + 1))
            velX = -1;

        // Pontuação
        if (bolaX <= 0) {
            pontosCPU++;
            bolaX = LARGURA / 2;
            bolaY = ALTURA / 2;
            velX = 1;
        }

        if (bolaX >= LARGURA - 1) {
            pontosJogador++;
            bolaX = LARGURA / 2;
            bolaY = ALTURA / 2;
            velX = -1;
        }

        Sleep(60);
    }

    return 0;
}