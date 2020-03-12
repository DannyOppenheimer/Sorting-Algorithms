#include <vector>
#include "super_classes.hpp"

template<typename T>
class insertion_sort : public base_sort<T> {
public:
    insertion_sort(T par_array[], int* array_size) : base_sort<T>(par_array, array_size) {}

    void sort() {
        int index_behind;
        T item;
        for (int i = 1; i < this->size; i++) {     
            item = this->array[i];
            index_behind = i - 1; 

            while (index_behind >= 0 && this->array[index_behind] > item) {  
                this->array[index_behind + 1] = this->array[index_behind];  
                --index_behind;
            }  
            this->array[index_behind + 1] = item;  
        } 
    }
};
