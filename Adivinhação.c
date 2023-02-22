#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){ 

//variaveis
    
    short seed = time(0);       //seed para deixar o numero sempre aleatorio
    srand(seed);

    short numero = rand();      ////seed para deixar o numero sempre aleatorio
   

    int escolha;

//codigo
    while(numero != escolha){
    

        printf("escolha o numero:\n");
        scanf("%d",&escolha);
        
        if(escolha == numero){
            printf("acertou");

        }
        else{
            if (numero > escolha)
            {
            printf("errou o numero e maior\n");
            }
            if (numero < escolha)
            {
            printf("errou o numero e menor\n");
            }

            
        
        }
    }
return 0;
  
}

