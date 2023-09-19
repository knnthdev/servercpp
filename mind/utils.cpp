#include <functional>
#include <stdio.h>
#include "utils.h"
using namespace std;

// template <class T>
// T foreach (bool(T it) func)[]{

// };

   template <class T>
   T Belly<T>::watch(int it){
    return *(it + Belly::array);
   };
   template <class T>
   void Belly<T>::set(T item, int index){

   }
   template <class T>
   Belly<T>::Belly(/* args */){
    T a_rray[this->size] = {default(T)};
    this->array = a_rray;

    delete [] a_rray;
   };
   template <class T>
   Belly<T>::~Belly()
   {
    delete [] Belly::array;
   };

template<class t>
void ForEach(t* matriz, int size, std::function<void(t&)> func)
{
    for (size_t i = 0; i < size; i++)
    {
        func(matriz[i]);
    }
}