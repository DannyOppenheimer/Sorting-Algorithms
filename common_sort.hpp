#pragma once
#include "sequential_sort.cpp"
#include "bubble_sort.cpp"
#include "merge_sort.cpp"
#include "insertion_sort.cpp"

template<typename T>
void printArr(T array[], int size) {
    std::cout << "----- Array -----" << std::endl;

    for(unsigned int i = 0; i < size; ++i) {
        std::cout << i + 1 << ".) " << array[i] << std::endl;
    }
}

int getTrailingValue(int x) {
    return abs(static_cast<int>(x*10))%10;
}