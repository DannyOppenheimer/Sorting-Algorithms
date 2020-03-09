#include <iostream>
#include "common_sort.hpp"

int main() {

    int pass[3] = {1, 2, 3};
    sequential_sort seq = sequential_sort(pass, 3);
    seq.sort();
    std::cout << seq.getArray()[0] << seq.getArray()[1] << seq.getArray()[2] << std::endl;
    return 0;
}
