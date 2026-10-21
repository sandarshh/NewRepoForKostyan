#include <iostream>
#include <bitset>
 HEAD
#include <cmath>

template <size_t N>
std::bitset<N> to_direct_code(int number) {

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


using namespace std;

// ������� ��� ������ ��������� ������������� ����� � �������������� ���� (8 ���)
void printBinary(char n) {
    cout << bitset<8>(n);
     ssd
}

int main() {
    int a, b;

    cout << "������� ������ ����� (��������, �� -128 �� 127): ";
    cin >> a;
    cout << "������� ������ �����: ";
    cin >> b;

    // �������� � ���� char (8 ���) ��� ������������ ��������������� ����
    char num1 = static_cast<char>(a);
    char num2 = static_cast<char>(b);
    char sum = num1 + num2;

    cout << "\n--- ������������� � �������������� ���� (8 ���) ---" << endl;

    cout << "����� " << a << " � ���. ����: ";
    printBinary(num1);
    cout << endl;

    cout << "����� " << b << " � ���. ����: ";
    printBinary(num2);
    cout << endl;

    cout << "------------------------------------------" << endl;
    cout << "����� (" << a << " + " << b << ") = " << (int)sum << endl;
    cout << "����� � ���. ����:          ";
    printBinary(sum);
    cout << endl;

    return 0;
}