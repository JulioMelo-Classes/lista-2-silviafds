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
 * @param first Ponteiro apontando para inicio do range
 * @param last Ponteiro apontando para fim do range
 * @param cmp Função que retorna True se a condição for satisfeita e caso contrário, False.
 * @param it Iterator que recebe em First, e dentro do While e For que percorre o range
 * @param it2 Iterator que percorre o range
 * @param std::iter_swap Faz a troca dos números quando a condição da função é satisfeita, fazendo o range ficar crescente
 */
template<class ForwardIt, class Comparison>
void sort(ForwardIt first, ForwardIt last, Comparison cmp)
{

    ForwardIt it = first;
    ForwardIt it2;

    while(it != last){
        for (it2 = it; it2 != last; it2++){
            if(cmp(*it2, *it)){
                std::iter_swap(it, it2);
            }
        }
        it++;
    }

}

}
#endif
