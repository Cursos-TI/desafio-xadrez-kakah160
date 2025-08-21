#include <stdio.h>
 
int main() {
    // iremos utilizar estruturas de repetição para simular o movimento das peças do xadrez
    // torre - 5 casas para a direita usando FOR
    // bispo - 5 casas para cima e direita usando WHILE
    // rainha - 8 casas para a esquerda usando DO-WHILE

     //jogo de xadrez- linguagem C trabalho



    // movimentando a torre 

    printf("movimentando a torre:\n");
    int torre = 5; //quantidade de casas que a torre pode andar
    for (int i = 1; i <= torre; i++) {
        printf("direita\n");

    void moverTorre(int casas) { //função para mover a torre
        if (casas > 0) {
            printf("direita\n");
            moverTorre(casas - 1);
        }
    }

    //movimentando o bispo

    printf("movimentando o bispo:\n");
    int bispo = 5; //quantidade de casas que o bispo pode andar
    int j = 1;
    while (j <= bispo) {
        printf("cima e direita\n");
        j++;
    }
     void moverBispo(int casas) { //função para mover o bispo
        if (casas > 0) {
            printf("cima e direita\n");
            moverBispo(casas - 1);
        }

    //movimentando a rainha 
    printf("movimentando a rainha\n");
    int rainha = 8; //quantidade de casas que a rainha pode andar
    do {
        printf("esquerda\n");
        rainha--;
    } while (rainha > 0);
    
       void moverRainha(int casas) { //função para mover a rainha
        if (casas > 0) {
            printf("esquerda\n");
            moverRainha(casas - 1);
        }
    }
    //movimentando o cavalo
    printf("movimentando o cavalo\n");
    int casasbaixo = 2; //quantidade de casas que o cavalo pode andar
    int casasesquerda = 1; //quantidade de casas que o cavalo pode andar

    //foi alterado as letras para variáveis de controle diferentes :)
    int m;
    for (m = 1; m <= casasbaixo; m++)
        printf("baixo\n");
    
    if (m == casasbaixo + 1) {
        int cont = 0;
        while (cont < casasesquerda) {
            printf("esquerda\n");
            cont++;
        }
        void moverCavalo(int casasBaixo, int casasEsquerda) { //função para mover o cavalo
            if (casasBaixo > 0 && casasEsquerda > 0) {
                printf("baixo\n");
                moverCavalo(casasBaixo - 1, casasEsquerda);
                printf("esquerda\n");
                moverCavalo(casasBaixo, casasEsquerda - 1);
            }
        }
    }

    //espero que eu tenha feito o trabalho corretamente. :)

    return 0;   
    }