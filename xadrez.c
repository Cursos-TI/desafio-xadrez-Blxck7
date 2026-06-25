#include <stdio.h>

    //Recursividade para mover a Torre
void moverTorre(int casas){
    if (casas > 0){
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}
    //Recursividade para mover o Bispo
void moverBispo(int casas){
    if (casas > 0){
        for (int vertical = 0; vertical < 1; vertical++){
            printf("Cima, ");
            for (int horizontal = 0; horizontal < 1; horizontal++){
                printf("Direta\n");
            }
        }
        moverBispo(casas - 1);
    }
}
    //Recursividade para mover a Rainha
void moverRainha(int casas){
    if (casas > 0){
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

int main(){
    // Variáveis
    int escolhaJogador;


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
            moverTorre(5);
        break;
        case 2:
            moverBispo(5);
        break;
        case 3:
            moverRainha(8);
        break;
        case 4:
            for (int passoLongo = 1; passoLongo <= 2; passoLongo++){ // Esquema para repetir duas vezes a movimentação para baixo.
                printf("Cima\n");
                for (int passoCurto = 1; passoLongo == 2; passoLongo++){ // Esquema para a movimentação ir para esquerda, só quando o passoLongo <= 2.
                    printf("Direita\n");
                }
            }
        }







}