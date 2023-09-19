#if !defined(UTILS)
#define UTILS

template<class T>
class Belly
{
private:
   int size{0};
   T* array;
public:
 Belly();
// T &operator[](int row){
//     return ;
//  }
 void push(T item);
 T watch(int row);
 void set(T item, int row);
 void erase(int row);
~Belly();
};

template<class t>
void ForEach(t* matriz, int size, std::function<void(t&)> func);



// template<class T>
// T foreach(bool(T item) func)[];

#endif

