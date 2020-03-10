#include <iostream>
#include "common_sort.hpp"
#include <list> 

int main() {

    int pass[6] = {70, 30, 40, 5, -1, -70};

    unsigned int size = 6;
    
    bubble_sort bub = bubble_sort(pass, &size);
    bub.sort();
    std::cout << bub.getArray()[0] << std::endl;

    return 0;
}