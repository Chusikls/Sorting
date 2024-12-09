#include <iostream>

int main()
{
    float number[15];
    for (int n = 0; n < 15; n++) {
        std::cout << "Enter float numbers: \n";
        std::cin >> number[n];
    }
    for (int n = 0; n < 15; n++) {
        for (int i = n + 1; i < 15; i++) {
            if (number[i] > number[n]) std::swap(number[i], number[n]);
        }
    }
    for (int n = 0; n < 15; n++) {
        std::cout << number[n] << ' ';
    }
}


