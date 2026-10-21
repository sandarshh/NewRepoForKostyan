#include <iostream>
#include <bitset>
#include <string>

using namespace std;

int main() {
    string input;
    cout << "Enter 8-bit direct code: ";
    cin >> input;

    bitset<8> directCode(input);
    bitset<8> complementCode;

    // ����������: ��������� ������ 7-� (����� �����) �������� ���
    if (directCode[7] == 0) {
        // ���� 0 � ����� �������������, ��� �� ��������
        complementCode = directCode;
    }
    else {
        // ���� 1 � ����� �������������:

        // 1. ����������� �������� ���� (� 0 �� 6)
        for (int i = 0; i < 7; i++) {
            complementCode[i] = !directCode[i];
        }

        // 2. ���� ��������� �������� ��� ��������
        complementCode[7] = 1;

        // 3. ���������� 1 � �������� ������� (��������� �������� � �������)
        bool carry = true;
        for (int i = 0; i < 7; i++) {
            if (complementCode[i] == 1 && carry) {
                complementCode[i] = 0;
            } else if (complementCode[i] == 0 && carry) {
                complementCode[i] = 1;
                carry = false; // ������� ����������, �������
                break;
            }
        }
    }

    cout << "Direct code:     " << directCode << endl;
    cout << "Complement code: " << complementCode << endl;

    return 0;
}