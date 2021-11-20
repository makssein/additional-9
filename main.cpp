#include <iostream>
#include "array.hpp"

int main() {
    int n;
    std::cin >> n;
    arr::Array mas(n);
    mas.getSize();
    std::cout << mas.getElem(0) << std::endl;

    return 0;
}
