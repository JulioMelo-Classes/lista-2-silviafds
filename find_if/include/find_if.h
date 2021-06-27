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
 * @param p Função que retorna True se determinada condição é satisfeita e caso contrário não 
 * @param it1 Iterator que recebe First e retorna it1 quando for True
 */
template<class InputIt, class UnaryPredicate>
InputIt find_if(InputIt first, InputIt last, UnaryPredicate p)
{
    
    InputIt it1 = first;

    do{
        if(p(*it1)){
            return it1;
        }
        it1++;
    } while(it1 != last);

    return last;
}

}
#endif
