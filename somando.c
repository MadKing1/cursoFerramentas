#include <stdio.h>
#include <stdlib.h>

int soma(int num);

int main(){
int num = 0;
int resposta = 0;
printf("Qual o numero final?\n");
scanf("%d", &num);

resposta = soma(num);
printf("Resposta = %d\n", resposta);
  
return 0;
}

int soma(int num){
  if (num == 1) return 1;
  return num + soma(num-1);
}
