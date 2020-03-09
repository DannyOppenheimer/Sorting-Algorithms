#include "super_classes.hpp"
#include <iostream>

class bubble_sort : public base_sort {

public:
    bubble_sort(int par_array[], unsigned int array_size) : base_sort(par_array, array_size) {
        
    }

    void sort() {
        std::cout << "Sort!";
    }
};