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
 * @param p Função que retorna True se a condição for satisfeita, caso contrário False
 * @param it Iterator que percorre o range
 */
template<class ForwardIt, class UnaryPredicate>
ForwardIt partition(ForwardIt first, ForwardIt last, UnaryPredicate p)
{
    
    ForwardIt it;

    for(it = first; it != last; it++){
        if(!p(*it)){
            return it;
        } 
        return last;
    }
    
}

}
#endif
