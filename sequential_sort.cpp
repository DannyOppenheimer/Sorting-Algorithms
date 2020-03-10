#include <array>
#include <iostream>
#include <limits>
#include <algorithm> 

#include "super_classes.hpp"
/*
* Sequential Sort
* Goes one by one, comparing each item of the list to the first.
* Finds the smallest one, and swaps with the first.
* Then do the same for the 2nd, 3rd, 4th, etc...
*/

class sequential_sort : public base_sort {
public:
    sequential_sort(int par_array[], unsigned int* array_size) : base_sort(par_array, array_size) {}

    void sort() {
        for(unsigned int i = 0; i < this->size; ++i) {
            // keep track of both the smallest number, and it's index.
            int current_low = std::numeric_limits<int>::max();
            unsigned int index_of_low;

            for(unsigned int e = i; e < this->size; ++e) {
                if(this->array[e] < current_low) {
                    // if it passes by a number that is lower than the current low, then overrite the current low
                    current_low = this->array[e];
                    index_of_low = e;
                }
            }
            // finally, perform the swap (current_low acts as the savespace).
            this->array[index_of_low] = this->array[i];
            this->array[i] = current_low;
        }
    }

};
