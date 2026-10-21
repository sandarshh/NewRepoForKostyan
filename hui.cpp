#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int number;
    const int bits = 8;

    cout << "Введите число: ";
    cin >> number;

    // Проверяем диапазон для 8-битного прямого кода
    if (number < -127 || number > 127) {
        cout << "Число не помещается в 8 бит.";
        return 0;
    }

    // Знаковый бит
    if (number < 0)
        cout << "1";
    else
        cout << "0";

    // Модуль числа переводим в двоичную систему
    int module = abs(number);

    bitset<7> binary(module);

    cout << binary << endl;

    return 0;
}
