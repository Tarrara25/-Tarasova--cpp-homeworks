#include <iostream>

using namespace std;

int main() {
    //��������� ��������� ������ �������� 3�3 
    int matrix[3][3];

    // ���������� ������� �� 1 �� 9 
    int counter = 1;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrix[i][j] = counter++;
        }
    }

    // ������� �������� �������
    cout << "�������� �������: ";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
    }
    cout << "\n";

    // ������� ����� ���� ���������
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum += matrix[i][j];
        }
    }
    // ������� ����� 
    cout << "����� ���������: " << sum;

    return 0;
}