#include <stdio.h>

/*********************************************************************
 *====================================================================
 *   BANCO DE CARTAS DO HEARTHSTONE
 * 
 * armazena os dados de cartas do jogo Hearthstone da Blizzard
 * de forma dinâmica
 * Utiliza um algoritmo de busca binária e um algoritmo de ordenação
 * 
 * ===================================================================
 * *******************************************************************/

/**-------------------------------- 
 * Autor: Jonathan Abreu
 * 
 *  -------------------------------
**/


typedef struct carta{
    char nome[20];
    int atk, def, mana;
    int raridade;
    struct carta proximo;
}carta;

carta inicio;

void iniciarLista(){
    inicio = NULL;
}

//Determina a raridade da carta
void detmRara(int valor){

}
int main(){
    return 0;
}