#include <iostream>
#include "array.hpp"

int main() {
    int n;
    std::cin >> n;
    arr::Array mas(n);
    mas.getSize();
    for(int i = 0; i < n; i++)
        mas.add(i);
    std::cout << "\n0 элемент массива = " << mas.getElem(0) << std::endl;
    mas.insert(3,10);
    std::cout << "Среднее значение:" << mas.average() << std::endl;

    return 0;
}
