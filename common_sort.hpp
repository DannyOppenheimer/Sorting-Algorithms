#pragma once
#include "sequential_sort.cpp"
#include "bubble_sort.cpp"

void visualize(int array[], int size) {
    std::cout << "---- Array ----" << std::endl;
    for(unsigned int i = 0; i < size; ++i) {
        std::cout << i + 1 << ".) " << array[i] << std::endl;
    }
}