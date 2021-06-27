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
   @param first Ponteiro apontado para o primeiro elemento do range
   @param last Ponteiro apontado para o último elemento do range
   @param d_first Ponteiro que aponta o novo valor no inicio do range
   @return Um return first Retorno da função
 */
template<class InputIt>
InputIt copy(InputIt first, InputIt last, InputIt d_first){
    InputIt i;
    
    for(i = first; i != last; i++){
        *d_first = *i;
        d_first++;
    }
    
    return first;
}

}
#endif
