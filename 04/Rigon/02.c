#include "stdio.h"

int soma(num1, num2){

  if ( num2 == 0) {
    return num1;
  }
  else {
    num1 += 1;
    num2--;
    return soma(num1,num2);
  }
}

int main() {
   int num1, num2, res;
   printf("Insira 2 numeros para a soma: \n");
   scanf("%d %d", &num1, &num2);
   res = soma(num1,num2);
   printf("%d\n", res);
}
