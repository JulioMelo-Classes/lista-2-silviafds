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
