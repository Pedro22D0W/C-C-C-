#include <stdio.h>

int main(){

    int escolha;
    int i;
    
 printf("escolha um numero de 0 a 10:\n");
 scanf("%d",&escolha);
 
 for ( i = 1; i <=10; i++)
 {
    printf("%d x %d = %d \n ",escolha,i,escolha * i);
 }
  
  return 0;
}