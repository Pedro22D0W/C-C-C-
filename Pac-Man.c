#include <stdio.h>
#include <stdlib.h>



int main() {
  char map[13][58+1];
  FILE* f;
  
    f=fopen("../texto/mapa.txt","r");


    for (int i= 0; i < 13; i++)
    {
      fscanf(f,"%s",map[i]);
    }

    for (int i = 0; i < 13; i++)
    {
      printf("%s\n",map[i]);
    }
    
    

  


  
  
  return 0;
}