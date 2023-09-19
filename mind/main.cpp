#include "program.h" 
#include "server.h"
#include "utils.h"
#include <iostream>

using namespace std;

int main(char* args) {
    int dog[4] = {1, 43, 12, 55};
    int *doggy = dog;
    ForEach(doggy, 4, [](int it){it = 2;});
    
    cout << doggy << endl;
    return 0x0;
}