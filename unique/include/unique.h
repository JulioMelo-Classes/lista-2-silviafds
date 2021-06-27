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
 * @param eq Função que retorna True se os 1º elemento é igual ao 2º, e False caso contrário
 * @param it Iterator recebe first, percorre o range enquanto for diferente de last-1
 * @param it2 Iterator recebe first+1 e é usado para comparar com o elemento anterior a ele
 */
template<class InputIt, class Equal>
InputIt unique( InputIt first, InputIt last, Equal eq )
{
    InputIt it = first;
    InputIt it2 = first+1;

    do{
        if(eq(*it, *it2)){
            std::iter_swap(it2, it2+1);
            it2++;

        } else if(!eq(*it, *it2)){
            it2++;
        }

        return it;

    } while(it != (last-1));

}
}


#endif
