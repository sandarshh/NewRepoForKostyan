#include <iostream>
#include <bitset>

using namespace std;

// ������� ��� ������ ��������� ������������� ����� � �������������� ���� (8 ���)
void printBinary(char n) {
    cout << bitset<8>(n);
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