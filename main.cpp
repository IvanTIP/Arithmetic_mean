#include <iostream>

template <typename T>
void input(T array[])
{
    std::cout << "Fill the array (8):";
    for (int i = 0; i < 8; ++i) {
        T buf;
        std::cin >> buf;
        array[i] = buf;
    }
}

template <typename T>
T calculate(T array[])
{
    T sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += array[i];
    }
    return sum/8;
}

int main()
{
    int array[8];
    input(array);
    std::cout << std::endl << calculate(array);

    return 0;
}