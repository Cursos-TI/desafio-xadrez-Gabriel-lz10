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

while (movimentocavalo--){
   for(l; l <= 2; l++){
        printf("%s: Baixo\n", cavalo);
    }
    printf("%s: Esquerda\n", cavalo);
}
    return 0;
}
