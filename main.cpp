#include <iostream>
#include "common_sort.hpp"

int main() {

    int pass[6] = {70, 30, 40, 5, -1, -70};
    bubble_sort bub = bubble_sort(pass, 6);
    bub.sort();
    visualize(bub.getArray(), bub.getSize());

    return 0;
}