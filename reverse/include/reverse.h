#ifndef GRAAL_H
#define GRAAL_H

#include <utility>
using std::pair;
#include <iterator>
using std::distance;
#include <algorithm>
using std::sort;

namespace graal {

/*! 
 * TODO: documentação no estilo doxygen
   @param BirdIt Iterador do range
   @param first Ponteiro apontado para o primeiro elemento do range
   @param last Ponteiro apontado para o último elemento do range
   @param tam Variável inteira com finalidade de guardar o tamanho total do range
   @param tam_dividido Variável inteira com finalidade de guardar a metade do valor de range
   @param std::iter_swap Utilizada para fazer as trocas dos elementos do range
 */
 /*
 95% o iter_swap não é um parametro
 */
template<class BidirIt>
void reverse(BidirIt first, BidirIt last)
{
    BidirIt iterator = first;
    BidirIt iterator2 = last-1;
    BidirIt i;
    int tam = 0;

    for(i = first; i != last; i++){
        tam++;
    }

    int tam_dividido = tam/2;

    for(int j = 0; j < tam_dividido; j++){
        std::iter_swap(iterator, iterator2);
        iterator2--;
        iterator++;
    }

}

}
#endif
