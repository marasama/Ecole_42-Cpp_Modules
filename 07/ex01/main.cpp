#include "iter.hpp"

int main(){
    int foo[4] = {33, 22, 11, 55};
    iter(foo, 4, print_func);

    std::string foo2[5] = {"Zart", "Zort", "Zattiri", "Zort", "Zort"};
    iter(foo2, 5, print_func);
}