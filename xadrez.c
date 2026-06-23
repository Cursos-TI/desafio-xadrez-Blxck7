#include <stdio.h>

int main(){
    // Variáveis
    int escolhaJogador;
    int indicador = 0;

    // A escolha de qual peça o jogador vai usar
    printf("Escolha a peça:\n");
    printf("1 - Torre\n");
    printf("2 - Bispo\n");
    printf("3 - Rainha\n");
    printf("4 - Cavalo\n");
    scanf("%d", &escolhaJogador);

    // Definição de movimentos de cada peça
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
        case 4:
            for (int i = 1; i <= 2; i++){ // Esquema para repetir duas vezes a movimentação para baixo.
                printf("Baixo\n");
                for (int j = 1; i == 2; i++){ // Esquema para a movimentação ir para esquerda, só quando o i <= 2.
                    printf("Esquerda\n");
                }
            }
        }







}