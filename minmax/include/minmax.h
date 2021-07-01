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
 * Exemplo de documentação seguindo o formato Doxygen
 *
 * @tparam Itr iterator para o range.
 * @tparam Compare o tipo de uma função bool(const T &a, const T &b)
 *
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 * @param cmp A função de comparação que retorna true quando o primeiro parâmetro é menor do que o segundo
 *
 * @return Um std::pair contendo o menor e maior elemento, nesta ordem
 *
 */
/*
ok realmete é uma forma estranha de fazer
*/
template <typename Itr, typename Compare >
std::pair<Itr, Itr> minmax(Itr first, Itr last, Compare cmp)
{
    Itr maior_elemento = first;
    Itr menor_elemento = first;
    int maior_quant = 0, menor_quant = 1;
    int quant_maior = 0, quant_menor = 0;
  
    for (Itr it = first; it != last; it++){
        for (Itr it2 = first; it2 != last; it2++){
          //indentação ruim!
        if (cmp(*it2 , *it) && it != it2){ // verificando quantos elementos são menores que it
            quant_menor++;
        }
        if (cmp(*it , *it2) && it != it2){ // verificando quantos elementos são maiores que it
            quant_maior++;
        }
    }

    if(quant_maior <= maior_quant){
      maior_quant = quant_maior;
      maior_elemento = it;
    }

    quant_maior = 0;

    if(quant_menor < menor_quant){
      menor_quant = quant_menor;
      menor_elemento = it;
    }
    
    quant_menor = 0;
    
  }
  
  return std::make_pair(menor_elemento, maior_elemento);
}
}




#endif

