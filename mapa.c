
void aloca_mapa(MAPA* m ){
  FILE *f; 


 f = fopen("../mapa.txt", "r");                    //<---------------(lê arqivo para definir o numero de colunas e linhas)
 fscanf(f,"%d %d",&m->linhas,&m->colunas);

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

void libera_memoria(MAPA* m){

  
  
for (int i = 0; i < m.linhas; i++)      //<---------------(libera a memoria)
{
  free(m.map[i]);
}
  free(m.map);                          //<---------------(libera a memoria)

    };