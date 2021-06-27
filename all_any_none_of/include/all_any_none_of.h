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
 * @param p Função que retorna True se a condição está satisfeita e False caso contrário
 * @param it Iterator que vai percorrer o range e passando o elemento em it para a função em busca de satisfazer as condições
 */
template<class InputIt, class UnaryPredicate> 
bool all_of(InputIt first, InputIt last, UnaryPredicate p) 
{ 
    InputIt it;

    if(first == last){
        return false;
    }
    for(it = first; it != last; it++) { 
        if(p(*it)) { 
            return true; 
        } 
        return false;
    } 

}
/*! 
 * @param first Ponteiro apontando para inicio do range
 * @param last Ponteiro apontando para fim do range
 * @param p Função que retorna True se a condição está satisfeita e False caso contrário
 * @param it Iterator que vai percorrer o range e passando o elemento em it para a função em busca de satisfazer as condições
 */
template<class InputIt, class UnaryPredicate> 
bool any_of(InputIt first, InputIt last, UnaryPredicate p) 
{ 
    InputIt it;

    for(it = first; it != last; it++) { 
        if(p(*it)) 
        { 
            return true; 
        } 
    } 
    return false; 
}

/*! 
 * @param first Ponteiro apontando para inicio do range
 * @param last Ponteiro apontando para fim do range
 * @param p Função que retorna True se a condição está satisfeita e False caso contrário
 * @param it Iterator que vai percorrer o range e passando o elemento em it para a função em busca de satisfazer as condições
 */
template<class InputIt, class UnaryPredicate> 
bool none_of(InputIt first, InputIt last, UnaryPredicate p) 
{ 
    InputIt it;

    for(it = first; it != last; it++) 
    { 
        if(p(*it)) 
        { 
            return false; 
        } 
    } 
    return true; 
}
}
#endif