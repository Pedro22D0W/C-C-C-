#include <stdio.h>
#include <stdlib.h>
#include "pac-man.h"
MP m;





int main() {
  char tecla;



aloca_mapa();

 do
 {
    

    scanf(" %c",&tecla);
    controle(tecla);

     for (int i = 0; i < 13; i++) {
     printf("%s\n", m.map[i]);
  };

  } while (!acabou());
 libera_memoria();
 

 }
  






void controle(char tecla){
 int x_pac;
 int y_pac;

/////////////acha posição do personagem na matriz///////////
 for (int i = 0; i < m.linhas; i++)
 {
      for (int j = 0; j < m.colunas; j++)
      {
          if (m.map[i][j] == '@')
          {
            x_pac =i;
            y_pac =j;
            break;
          }
        } 
}
/////////////acha posição do personagem na matriz///////////

/////////////move personagem///////////////////////////////

switch (tecla)
{
case 'a':
  m.map[x_pac][y_pac -1] = '@';
  break;

case 's':
  m.map[x_pac +1 ][y_pac] = '@';
  break;
case 'd':
  m.map[x_pac][y_pac +1] = '@';
  break;

  case 'w':
  m.map[x_pac -1 ][y_pac] = '@';
 
  break;
}
m.map[x_pac][y_pac]= '.';
}

int acabou(){
  return 0;
}

















void libera_memoria(){

  
  
for (int i = 0; i < m.linhas; i++)      //<---------------(libera a memoria)
{
  free(m.map[i]);
}
  free(m.map);                          //<---------------(libera a memoria)

    };

void aloca_mapa(){
  FILE *f; 


 f = fopen("../mapa.txt", "r");                    //<---------------(lê arqivo para definir o numero de colunas e linhas)
 fscanf(f,"%d %d",&m.linhas,&m.colunas);

  ////////// aloca mapa dinamicamente //////////////////
m.map = malloc(sizeof(char*) * m.linhas);
for (int i = 0; i < m.linhas; i++)
{
  m.map[i] = malloc(sizeof(char) * (m.colunas +1 ));
  
}
///////////////////////////////////////////////////////
//////////////exibe mapa///////////////////////////
  for (int i = 0; i < m.linhas; i++) {
    fscanf(f, "%s", m.map[i]);
  }

  for (int i = 0; i < m.linhas; i++) {
    printf("%s\n", m.map[i]);
  };

  fclose(f);                          //<---------------(fecha arquivo)
  /////////////////////////////////////////////////
}