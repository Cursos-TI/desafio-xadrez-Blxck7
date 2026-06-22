#include <stdio.h>

int main(){

    int escolhaJogador;
    int indicador = 0;

    printf("Escolha a peça:\n");
    printf("1 - Torre\n");
    printf("2 - Bispo\n");
    printf("3 - Rainha\n");
    scanf("%d", &escolhaJogador);

    switch (escolhaJogador) {
        case 1:
            for (int i = 0; i < 5; i++){
                printf("Direita\n");
            }
        break;
        case 2:
            while (indicador < 5){
                printf("Cima-Direita\n");
                indicador++;
            }
        break;
        case 3:
            do {
                printf("Esquerda\n");
                indicador++;
            } while (indicador < 8);
        break;
        }







}