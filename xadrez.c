#include <stdio.h>


int main() {
    // declarei as variáveis
   int i = 1, j = 1, k = 1, l = 1;
   char bispo[10] = "Bispo";
   char torre[10] = "Torre";
   char rainha[10] = "Rainha";
   char cavalo[10] = "Cavalo";
   int movimentocavalo = 1;
   
    /* usei o while no bispo, i = 1 e a cada repetição incrementa +1 no valor de i,
    então vai executa 5 vezes, quando i valer 6 o programa para e ele vai ter rodado 5 vezes.*/
   while (i <= 5){
    printf("%s: cima, direita\n", bispo);
    i++;
   }

   printf("\n");

   /* aqui eu usei o do-while, j = 1  e a cada repetição incrementa +1 no valor de j,
    então vai executa 5 vezes, quando a valer 6 o programa para e ele vai ter rodado 5 vezes.*/
   do{
    printf("%s: direita\n", torre);
    j++;
   } while (j <= 5);

   printf("\n");
   /* aqui usei o for, k = 1 e a cada repetição incrementa +1 no valor de k, 
   então vai executa 8 vezes, quando k valer 9 o programa para e ele vai ter rodado 8 vezes.*/
   for(k ; k <= 8; k++){
    printf("%s: esquerda\n", rainha);
   }
   
  printf("\n");

  /* criei a variável "movimentocavalo" e armazenei o valor 1 nela e no código 
coloquei um decremento, assim só vai executar uma vez porque
depois da primeira execução o 1 vai virar 0 e com isso não vai mais executar.*/
while (movimentocavalo--){
   for(l; l <= 2; l++){
        printf("%s: Baixo\n", cavalo); /* o loop interno vai rodar 2 vezes e quando sai dele vai ter um printf que estar
        no loop externo pronto pra executar o último movimento do cavalo.*/
    }
    printf("%s: Esquerda\n", cavalo);
}
    return 0;
}
