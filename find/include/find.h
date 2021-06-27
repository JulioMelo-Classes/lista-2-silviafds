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
 * @param value Valor a ser comparado na função
 * @param eq Função que retorna True se o elemento é igual ao segundo e False caso contrário
 * @param it1 Iterator que recebe First e percorre o range. Também usado o elemento na função eq
 */
template<class InputIt, class T, class Equal>
InputIt find(InputIt first, InputIt last, const T& value, Equal eq)
{

    InputIt it1 = first;

    do{
        if(eq(*it1, value)){
            return it1;
        }
        it1++;
    } while(it1 != last);
    
    return last;
}

}
#endif
