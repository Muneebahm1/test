#include <iostream>

int main() {
    int x = 5;
    if (x = 10) {
        std::cout << "x is equal to 10" << std::endl;
    } else {
        std::cout << "x is not equal to 10" << std::endl;
    }

    for (int i = 0; i <= 5; i++) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    int array[3] = {1, 2, 3};
    for (int i = 0; i <= 3; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    int* p = new int(5);
    delete p;

    return 0;
}
