#include <stdio.h>

int main(){ 

//variaveis
    int n1;
    int n2;
	int n3 = n1+n2;

//codigo

    printf("escolha o numero 1:\n");

    scanf("%d",&n1);
	
	printf("escolha o numero 2:\n");
    scanf("%d",&n2);
    
   
    printf("%d",n1 + n2);
    
  return 0;
  }