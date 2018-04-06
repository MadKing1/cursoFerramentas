#include <stdio.h>
#include <stdlib.h>

int main(){
int num = 0;
int resposta = 0;

printf("Qual o numero final?\n");
scanf("%d", &num);

resposta = soma(num);
printf("Resposta = %d\n", resposta);
  
return 0;
}
