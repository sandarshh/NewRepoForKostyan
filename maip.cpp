#include <iostream>
#include <cmath>

template <size_t N>
std::bitset<N> to_direct_code(int number)
{

    int max_val = (1 << (N - 1)) - 1;
    if (std::abs(number) > max_val) {
        throw std::out_of_range("����� ������� ������ ��� ������� ���������� ���.");
    }


    std::bitset<N> bits(std::abs(number));


    if (number < 0) {
        bits.set(N - 1);
    }

    return bits;
}

int main() {
    int num1 = 5;
    int num2 = -5;


    std::cout << " 5 � ������ ����: " << to_direct_code<8>(num1) << std::endl;
    std::cout << "-5 � ������ ����: " << to_direct_code<8>(num2) << std::endl;

    return 0;
}

