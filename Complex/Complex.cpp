#include "Complex.h"
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");

    Complex c1(2.2, 3.9), c2(1.1, -2.6), c3;

    std::cout << "\nПеременные с1 и с2\n";
    std::cout << "c1: " << c1 << "\n";
    std::cout << "c2: " << c2 << "\n";

    std::cout << "\nСложение с1 и с2\n";
    c3 = c1 + c2;
    std::cout << "c1 + c2 = " << c1 << " + " << c2 << " = " << c3 << "\n";

    std::cout << "\nВычитание с1 и с2\n";
    c3 = c1 - c2;
    std::cout << "c1 - c2 = " << c1 << " - " << c2 << " = " << c3 << "\n";

    std::cout << "\nУмножение с1 и с2\n";
    c3 = c1 * c2;
    std::cout << "c1 * c2 = " << c1 << " * " << c2 << " = " << c3 << "\n";

    std::cout << "\nДеление с1 и с2\n";
    c3 = c1 / c2;
    std::cout << "c1 / c2 = " << c1 << " / " << c2 << " = " << c3 << "\n";

    std::cout << "\nПрефиксный инкремент с1\n";
    ++c1;
    std::cout << "++c1 = " << c1 << "\n";

    std::cout << "\nПостфиксный инкремент с2\n";
    c2++;
    std::cout << "c2++ = " << c2 << "\n";

    std::cout << "\nПрефиксный декремент с1\n";
    --c1;
    std::cout << "--c1 = " << c1 << "\n";

    std::cout << "\nПостфиксный декремент с2\n";
    c2--;
    std::cout << "c2-- = " << c2 << "\n";

    // Сравнение по модулю
    std::cout << "\nСравнение по модулю с\n";
    std::cout << "c1 > c2: " << (c1 > c2) << "\n";
    std::cout << "c1 < c2: " << (c1 < c2) << "\n";
    std::cout << "c1 == c2: " << (c1 == c2) << "\n";
    std::cout << "c1 != c2: " << (c1 != c2) << "\n";

    // Ввод комплексного числа
    std::cout << "\nВведите комплексное число (real imag): ";
    std::cin >> c3;
    std::cout << "c3 = " << c3 << "\n";

    return 0;
}
