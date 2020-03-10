#include <iostream>
#include <string>
#include "common_sort.hpp"

int main() {

    int pass[4] = {1, -1, 4, 10};

    unsigned int size = 4;

    sequential_sort<int> ins = sequential_sort<int>(pass, &size);
    ins.sort();
    printArr<int>(ins.getArray(), ins.getSize());

    return 0;
}