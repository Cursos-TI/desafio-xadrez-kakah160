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

    }

{
    //movimentando o bispo

    printf("movimentando o bispo:\n");
    int bispo = 5; //quantidade de casas que o bispo pode andar
    int i = 1;
    while (i <= bispo) {
        printf("cima e direita\n");
        i++;
    }


    //movimentando a rainha 
    printf("movimentando a rainha\n");
    int rainha = 8; //quantidade de casas que a rainha pode andar
    do {
        printf("esquerda\n");
        rainha--;
    } while (rainha > 0);
    
    

    i++;

    }

    //espero que eu tenha feito o trabalho corretamente. :)
    return 0;
}