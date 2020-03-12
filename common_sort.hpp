#pragma once
#include "sequential_sort.cpp"
#include "bubble_sort.cpp"
#include "merge_sort.cpp"
#include "insertion_sort.cpp"

#include <stdlib.h>
#include <iostream>

namespace sort_util {
template<typename T>
    void printArr(T array[], int* size) {
        std::cout << "----- Array -----" << std::endl;

        for(int i = 0; i < *size; ++i) {
            std::cout << i + 1 << ".) " << array[i] << std::endl;
        }
    }

    template<typename T>
    void randomize(T array[], int* size) {
        for (int i = i - 1; i > 0; i--) {  
            // Pick a random index from 0 to i  
            int rand = std::rand() % (i + 1);  
    
            // Swap arr[i] with the element  
            // at random index  
            T temp = array[rand];  
            array[rand] = array[i];  
            array[i] = temp;
        }  
    }
};



