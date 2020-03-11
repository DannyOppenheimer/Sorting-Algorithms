#include <iostream>
#include <string>
#include "common_sort.hpp"

int main() {
    
    char words[] = {'S', 't', 'e', 'p', 'h', 'e', 'n'};
    unsigned int size = 7;
    sequential_sort<char> seq = sequential_sort<char>(words, &size);
    seq.sort();
    printArr(seq.getArray(), seq.getSize());
    return 0;
}