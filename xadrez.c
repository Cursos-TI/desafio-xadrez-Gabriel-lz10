#include <stdio.h>


int main() {
    // declarei as variáveis
   int i = 1, a = 1, b = 1;
   char bispo[10] = "Bispo";
   char torre[10] = "Torre";
   char rainha[10] = "Rainha";
   
    /* usei o while no bispo, i = 1 e a cada repetição incrementa +1 no valor de i,
    então vai executa 5 vezes, quando i valer 6 o programa para e ele vai ter rodado 5 vezes.*/
   while (i <= 5){
    printf("%s: cima, direita\n", bispo);
    i++;
   }

   /* aqui eu usei o do-while, a = 1  e a cada repetição incrementa +1 no valor de a,
    então vai executa 5 vezes, quando a valer 6 o programa para e ele vai ter rodado 5 vezes.*/
   do{
    printf("%s: direita\n", torre);
    a++;
   } while (a <= 5);

   /* aqui usei o for, b = 1 e a cada repetição incrementa +1 no valor de b, 
   então vai executa 8 vezes, quando b valer 9 o programa para e ele vai ter rodado 8 vezes.*/
   for(b ; b <= 8; b++){
    printf("%s: esquerda\n", rainha);
   }
   
    return 0;
}
