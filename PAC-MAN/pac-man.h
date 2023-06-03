struct mapa
{
int linhas;
int colunas;
char ** map;
};

typedef struct mapa MP;

void libera_memoria(MP* m);
void aloca_mapa(MP* m);
int acabou();
void controle(MP *m,char tecla,int *x_pac,int*y_pac);
void acha_personagem(MP m,int *x_pac,int*y_pac);

/////////////move personagem///////////////////////////////
void controle(MP *m,char tecla,int *x_pac,int*y_pac){


switch (tecla)
{
case 'a':
if ((*m).map[*x_pac][*y_pac -1] != '-' && (*m).map[*x_pac][*y_pac -1] != '|' && (*m).map[*x_pac][*y_pac -1] != '_' )
{
  (*m).map[*x_pac][*y_pac -1] =  '@';
  (*m).map[*x_pac][*y_pac]= '.';
  (*y_pac) -= 1;
}
break;
case 's':
if ((*m).map[*x_pac +1 ][*y_pac] != '|' && (*m).map[*x_pac + 1][*y_pac] != '-' && (*m).map[*x_pac + 1][*y_pac] != '_')
{
  (*m).map[*x_pac +1 ][*y_pac] = '@';
  (*m).map[*x_pac][*y_pac]= '.';
  (*x_pac) +=1;
}
  break;

case 'd':
if ((*m).map[*x_pac][*y_pac +1] != '-' && (*m).map[*x_pac][*y_pac +1] != '|' && (*m).map[*x_pac][*y_pac +1] != '_')
{
  (*m).map[*x_pac][*y_pac +1] =  '@';
  (*m).map[*x_pac][*y_pac]= '.';
  (*y_pac) +=1;
}
  break;

  case 'w':
  if ((*m).map[*x_pac -1 ][*y_pac] != '|' && (*m).map[*x_pac - 1][*y_pac] != '-' && (*m).map[*x_pac -1 ][*y_pac] != '_')
{
  (*m).map[*x_pac -1 ][*y_pac] = '@';
  (*m).map[*x_pac][*y_pac]= '.';
  (*x_pac) -=1;
}
  break;
}


}
/////////////move personagem///////////////////////////////

int acabou(){
  return 0;
}

void aloca_mapa(MP* m ){
  FILE *f; 


 f = fopen("../mapa.txt", "r");                    //<---------------(lê arqivo para definir o numero de colunas e linhas)
 fscanf(f,"%d %d",&(*m).linhas,&(*m).colunas);

  ////////// aloca mapa dinamicamente //////////////////
(*m).map = malloc(sizeof(char*) * (*m).linhas);
for (int i = 0; i <(*m).linhas; i++)
{
  (*m).map[i] = malloc(sizeof(char) * ((*m).colunas +1 ));
  
}
///////////////////////////////////////////////////////
//////////////exibe mapa///////////////////////////
  for (int i = 0; i <(*m).linhas; i++) {
    fscanf(f, "%s", (*m).map[i]);
  }

  for (int i = 0; i <(*m).linhas; i++) {
    printf("%s\n", (*m).map[i]);
  };

  fclose(f);                          //<---------------(fecha arquivo)
  /////////////////////////////////////////////////
}

void libera_memoria(MP* m){

  
  
for (int i = 0; i < (*m).linhas; i++)      //<---------------(libera a memoria)
{
  free((*m).map[i]);
}
  free((*m).map);                          //<---------------(libera a memoria)

    };


/////////////acha posição do personagem na matriz///////////
void acha_personagem(MP m,int *x_pac,int*y_pac){

 for (int i = 0; i < m.linhas; i++)
 {
      for (int j = 0; j < m.colunas; j++)
      {
          if (m.map[i][j] == '@')
          {
            (*x_pac) =i;
            (*y_pac) =j;
            break;
          }
        } 
}
};
/////////////acha posição do personagem na matriz///////////





















