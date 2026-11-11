#include <stdio.h>
#include "tad.h"

typedef struct posicao{
    int bloco; // Bloco de 0 até 9999
    struct posicao *prox_posicao; // Próximo bloco
} Posicao;

typedef struct numero {
    int sinal; // 0 - Negativo; 1 - Positivo
    Posicao *primeira_posicao; // Ponteiro para a primeira posicao
} Numero;

int lista_criar(Numero **numero, int sinal){
    *numero = malloc(sizeof(Numero));
    if(*numero == NULL) return 0;
    (*numero)->primeira_posicao = NULL;
    (*numero)->sinal = sinal;
    return 1; 
}

int listra_destruir(Numero **numero){
    free(*numero);
    *numero = NULL;
    return 1;
}

int main(){
    
}