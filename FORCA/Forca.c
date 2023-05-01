#include <stdio.h>
#include <string.h>
#include "functions.h"
#include "stdlib.h"
#include "time.h"



////Veriaveis/////
   char chute;
   char chutes[26];         //<--onde são guardadas as tentativas
   int  tent = 0;            //<--indicie das tentativas(onde seram guardadas no vetor chutes)
   int  chances = 0;         //<--numero de chances
   char resposta[10];
   char palavra[10];
int main(){

escolhadepalavras();



 intro();





while (chances<10 && strcoll(palavra,resposta))
    {
        entradadeletra();
    
            for( int i = 0; i < strlen(palavra) ; i++)  //<--strlen vai ser o total de letras da string em "palavra"        
            {
                 verifica(chutes,palavra,i);
            } 

        printf("\n");  //<-- PL
        chances++;
        
    }



    if (chances<10)
    {
        printf("\nPARABENS VOCE GANHOU!!!!");
    }
    else
    {
        printf("\nVOCE PERDEU");
        printf("\nA RESPOSTA ERA: %s",palavra);
    }
    


return 0;

}















 void intro(){
  printf("-------------------------------\n");
  printf("|          FORCA              |\n");
  printf("-------------------------------\n");
 };

 void verifica(char chutes[26],char palavra[10],int i){

     //verifica se o o char em "palavra[i]" esta preswnte em "chutes"
                int achou = 0;                             
                for(int j =0; j < strlen(chutes) ; j++){  
                                
                        if (palavra[i] == chutes[j])
                        {                            
                            achou=1;
                            break;
                            }     
                ///////////////////////////////////////////////////////////////                          
                }

                //se "achou for verdadeiro imprimir char na posiçao "i de "palavra"
                if (achou)
                {
                   printf("%c",palavra[i]);
                   resposta[i] = palavra[i];
                
                }
                else
                {
                    printf("_");
                    
                    
                };
   
                
                ///////////////////////////////////////////////////////////////////   

 };

 void entradadeletra(){
        scanf(" %c",&chute);        //<--função para o usuario digitar na tela
        printf("\n") ;              //<--PL
        chutes[tent] = chute;       //<--input armazenado na variavel/vetor "chutes" posição "tent"
        tent++;                     //<--incrementa tent para indicar proxima pisição

 }

 void escolhadepalavras(){

    FILE *arquivo;                          //define variavel do tipo file     

    arquivo = fopen("../palavras.txt", "r");   //manda arquivo para variavel com tag "r" de somente leitura

    int npalavras;                          //variavel com o numero de palavras
    fscanf(arquivo, "%d", &npalavras);      //manda o numero de palavras definido na primeira linha do arquivo para variavel

     

   
    ////algoritimo randomizador////
    
    srand(time(0));
    int nrandom = rand() % npalavras;       
    for(int l =0;l<= nrandom; l++ ){

        fscanf(arquivo,"%s", palavra);
    
    }

    /////////////////////////// 

    fclose(arquivo);            //fecha o arquivo
    }
    

 




 