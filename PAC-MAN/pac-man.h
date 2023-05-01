void libera_memoria();
void aloca_mapa();
int acabou();
void controle(char tecla);

struct mapa
{
int linhas;
int colunas;
char ** map;
};

typedef struct mapa MP;
