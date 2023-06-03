#include <stdio.h>
#include <stdlib.h>
#include "conio.h"
#include "pac-man.h"








int main() {
  char tecla;
  MP m;
 int x_pac;
 int y_pac;



aloca_mapa(&m);
acha_personagem(m,&x_pac,&y_pac);


 do
 {
    

    //scanf(" %c",&tecla);
    tecla =getch();
    controle(&m,tecla,&x_pac,&y_pac);
    system("cls");

     for (int i = 0; i < 13; i++) {
     printf("%s\n", m.map[i]);
  };

  } while (!acabou());
 libera_memoria(&m);
 

 }
  
