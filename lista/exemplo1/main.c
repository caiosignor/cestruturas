#include <stdio.h>
#include "lib/clist/clist.h"

typedef struct _Musica Musica;
struct _Musica
{   
    char *titulo;
    char *autor;
    int  duracao_em_segundos;
};

void imprmirNodo(Musica *nodo){
    printf("%s - %s\n",nodo->titulo,nodo->autor);
}

Musica criarMusica(char *titulo, char *autor, int duracao);

int main(){
    Lista *inicio;
    Musica musica1;

    musica1 = criarMusica("echoes", "pink floyd", 845);
    inicio = adicionarElemento(inicio, &musica1,sizeof(Musica));

    musica1 = criarMusica("sultoes do swing2", "dire straits", 2334);
    adicionarElemento(inicio, &musica1,sizeof(Musica));

    musica1 = criarMusica("sultoes do swing4", "dire straits", 2334);
    adicionarElemento(inicio, &musica1,sizeof(Musica));

    musica1 = criarMusica("sultoes do swing4", "dire straits", 2334);
    adicionarElemento(inicio, &musica1,sizeof(Musica));
    
    for_each(inicio, imprmirNodo);
    return 0;
}

Musica criarMusica(char *titulo, char *autor, int duracao){
    Musica musica;
    musica.titulo = titulo;
    musica.autor = autor;
    musica.duracao_em_segundos = duracao;
    return musica;
}