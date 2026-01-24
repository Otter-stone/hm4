#include <iostream>

int main() {
    setlocale(LC_CTYPE, "rus");

    //задача 1
    int number;
    int sum = 0;

    while (true) {
        std::cout << "Введите целое число или число '0', чтобы закончить:\n";
        std::cin >> number;

        if (number == 0) {
            break;  
        }

        sum += number;  
    }

    std::cout << "Сумма: " << sum << std::endl;

    //задача 2
    int number;
    std::cout << "Введите целое число:\n";
    std::cin >> number;

    int temp = number;
    if (temp < 0) {
        temp = -temp;  
    }

    int sum = 0;

    while (temp > 0) {
        int digit = temp % 10;  
        sum += digit;           
        temp /= 10;             
    }

    std::cout << "Сумма цифр: " << sum << std::endl;

    //задача 3
    int number;
    std::cout << "Введите целое число:\n";
    std::cin >> number;

    for (int i = 1; i <= 10; i++) {
        std::cout << number << " x " << i << " = " << number * i << std::endl;
    }

    return EXIT_SUCCESS;
}