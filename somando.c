#include <stdio.h>
#include <stdlib.h>

int soma(int num);

int main(){

return 0;
}

int soma(int num){
  if (num == 1) return 0;
  return num + soma(num-1);
}
