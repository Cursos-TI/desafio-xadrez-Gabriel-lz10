#include <stdio.h>
// fora do main declarei os procedimentos que eu usei como recursividade.
void movertorre(int casa){
    if (casa > 5 ){
        printf("Torre: direita\n");
        movertorre(casa - 1);
    }
}

void moverrainha(int casa){
    if (casa > 2 ){
        printf("Rainha: esquerda\n");
        moverrainha(casa - 1);
    }
}

void moverbispo(int casa){
    if (casa > 1 ){
        printf("direita\n");
        moverbispo(casa - 1);
    }
}

int main() {
    // declarei as variáveis
   int i = 1;
   char bispo[10] = "Bispo";
   char cavalo[10] = "Cavalo";
   int movimentocavalo = 1;
   
    /* usei o while no bispo, i = 1 e a cada repetição incrementa +1 no valor de i,
    então vai executa 5 vezes, quando i valer 6 o programa para e ele vai ter rodado 5 vezes.*/
   while (i <= 5){
    printf("%s: cima, ", bispo); /*essa parte externa do loop executa o "cima" e a recursividade "moverbispo" que é
                                a parte interna executar a palavra "direita"*/
    i++;
     moverbispo(2); // essa recursividade só vai ser executada 1 vez a cada repetição de while.
   }

   printf("\n");

   movertorre(10); // aqui só a recursividade é o usuficiente pra executar o movimento da torre.

   printf("\n");
  
   moverrainha(10);  // aqui só a recursividade é o usuficiente pra executar o movimento da rainha.

   printf("\n");


 /*criei a variável "movimentocavalo" e armazenei o valor 1 nela e no código 
coloquei um decremento, assim só vai executar uma vez porque
depois da primeira execução o 1 vai virar 0 e com isso não vai mais executar.*/
while (movimentocavalo--){
   for(int l = 1; l > 0 && l <= 3; l++){ // usei a opção de múltipla condições, l tem que ser maior que 0 e menor ou igual a 3.
    if(l == 2) continue; // usei o continue pra ele pular a iteração com o 2 e continuar com a próxima iteração.
        printf("%s: cima\n", cavalo); 
    }
    printf("%s: direita\n", cavalo);
}
    return 0;
}
