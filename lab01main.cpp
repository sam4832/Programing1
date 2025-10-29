#include <iostream>
#include <climits>
#include <cfloat>

using namespace std;

int main() {
    cout << "Типы данных в C++:\n";
    
    cout << "Тип: char, размер: " << sizeof(char) << " байт, диапазон: " 
         << (int)CHAR_MIN << " до " << (int)CHAR_MAX << "\n";
    
    cout << "Тип: int, размер: " << sizeof(int) << " байт, диапазон: " 
         << INT_MIN << " до " << INT_MAX << "\n";
    
    cout << "Тип: double, размер: " << sizeof(double) << " байт, диапазон: "
         << DBL_MIN << " до " << DBL_MAX << "\n";
    
    cout << "Тип: bool, размер: " << sizeof(bool) << " байт, диапазон: " 
         << 0 << " до " << 1 << "\n";

    cout << "\nПример арифметических операций с типами данных:\n";
    int a = 5, b = 3;
    
    cout << "Сложение: " << a + b << "\n";
    cout << "Вычитание: " << a - b << "\n";
    cout << "Умножение: " << a * b << "\n";
    cout << "Деление (int): " << a / b << "\n";

    double c = 5.0, d = 3.0;
    cout << "Деление (double): " << c / d << "\n";

    int x = 10;
    cout << "\nПеременная x, значение: " << x << "\n";
    x = 20;
    cout << "Новое значение переменной x: " << x << "\n";

    int num1, num2;
    cout << "\nВведите два целых числа:\n";
    cout << "Первое число: ";
    cin >> num1;
    cout << "Второе число: ";
    cin >> num2;

    cout << "Сложение: " << num1 + num2 << "\n";
    cout << "Вычитание: " << num1 - num2 << "\n";
    cout << "Умножение: " << num1 * num2 << "\n";
    
    if (num2 != 0) {
        cout << "Деление (int): " << num1 / num2 << "\n";
        cout << "Деление (double): " << (double)num1 / num2 << "\n";
    } else {
        cout << "Деление на ноль невозможно.\n";
    }

    if (num2 != 0) {
        int result_int = num1 / num2;
        double result_double = (double)num1 / num2;
        cout << "\nРезультат деления в типе int: " << result_int << "\n";
        cout << "Результат деления в типе double: " << result_double << "\n";
    }

    cout << "\nВаша программа успешно завершена!\n";
    cout << "Не забудьте собрать проект с помощью CMake и загрузить на GitHub/GitLab.\n";

    return 0;
}
