#include <iostream>
using namespace std;

int main() {
    //��������� ���������� 
    int number;

    // ������ ����� � ������������
    cout << "������� �����: ";
    cin >> number;

    // �������� ����� � ������� if-else
    if (number > 0) {
        // ������, a > 0 �������
        cout << "����� ������������ " << "\n";
    }
    else if (number < 0) {
        // ������, ����� a > 0 �����, � a < 0 �������
        cout << "����� ������������� " << "\n";
    }
    else if (number == 0) {
        cout << "����� ���� " << "\n";
    }
    return 0;
}