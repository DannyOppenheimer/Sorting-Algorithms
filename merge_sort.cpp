#include "super_classes.hpp"

#include <vector>
#include <iostream>

template<typename T>
class merge_sort : public base_sort<T> {
public:
    merge_sort(T par_array[], int* array_size) : base_sort<T>(par_array, array_size) {
        for(int i = 0; i < *array_size; ++i) {
            std::vector<T> item(1, par_array[i]);
            temp_array.push_back(item);
        }
    }

    void sort() {
        this->split();
    }

    std::vector<std::vector<T> > getTempArray() {
        return this->temp_array;
    }

private:
    std::vector<std::vector<T> > temp_array;
};