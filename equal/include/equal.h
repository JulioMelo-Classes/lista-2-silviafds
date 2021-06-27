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
 * @param first1 Ponteiro apontando para o inicio range1
 * @param first2 Ponteiro apontando para o inicio range2
 * @param last1 Ponteiro apontando para o final range1
 * @param last2 Ponteiro apontando para o final range2
 * @param eq Função que retorna True se dada condição for satisfeita, caso contrário False
 * @param i Iterador que percorre o range 1 
 */
template<class InputIt1, class InputIt2, class Equal>
bool equal(InputIt1 first1, InputIt1 last1, InputIt2 first2, Equal eq)
{

    InputIt1 i;
    for(i = first1; i != last1; i++){
        if(eq(*i, *first2)){
            return true;
        }
        i++;
        first2++;
    }
   
    return false;
}

template<class InputIt1, class InputIt2, class Equal>
bool equal(InputIt1 first1, InputIt1 last1,
           InputIt2 first2, InputIt2 last2,
           Equal eq )
{

    while(first1 != last2){
        if(eq(*first1, *first2)){
            return true;
        }
        first1++;
        first2++;
    }


    return false;
            
}
    
}

//}
#endif
