#include "super_classes.hpp"
#include <iostream>

class bubble_sort : public base_sort<int> {

public:
    bubble_sort(int par_array[], int* array_size) : base_sort(par_array, array_size){}

    void sort() {
        for(int i = 0; i < this->size - 1; ++i) {
            bool swapped = false;

            for(int j = 0; j < this->size - i - 1; ++j) {
                if (this->array[j] > this->array[j + 1]) {
                    swapped = true;
                    int save_space = this->array[j];
                    this->array[j] = this->array[j + 1];
                    this->array[j + 1] = save_space;
                } 
            }

            if(!swapped) {
                break;
            }
        }
    }
};