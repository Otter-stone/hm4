#include <iostream>


int main() {
    setlocale(LC_CTYPE, "rus");

    // задача 1
    int number1;
    int sum1 = 0;

    while (true) {
        std::cout << "Введите целое число или число '0', чтобы закончить:\n";
        std::cin >> number1;

        if (number1 == 0) {
            break;
        }

        sum1 += number1;
    }

    std::cout << "Сумма: " << sum1 << std::endl;

    // задача 2
    int number2;
    std::cout << "Введите целое число:\n";
    std::cin >> number2;

    int temp = number2;
    if (temp < 0) {
        temp = -temp;
    }

    int sum2 = 0;

    while (temp > 0) {
        int digit = temp % 10;
        sum2 += digit;
        temp /= 10;
    }

    std::cout << "Сумма цифр: " << sum2 << std::endl;

    // задача 3
    int number3;
    std::cout << "Введите целое число:\n";
    std::cin >> number3;

    for (int i = 1; i <= 10; i++) {
        std::cout << number3 << " x " << i << " = " << number3 * i << std::endl;
    }

    return EXIT_SUCCESS;
}