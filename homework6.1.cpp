#include <iostream>
#include <cstdlib>   // ��� rand()
#include <ctime>    // ��� time()
using namespace std;

int main() {
    //��������� ������ 
    int numbers[5];

    // ������� �������� �������
    cout << "�������� �������: ";

    // ��� ������������� ���������� ��������� �����
    srand(time(0));

    // ���������� ������� ����. ������� � ����� ���������
    for (int i = 0; i < 5; i++) {
        numbers[i] = rand() % 10;  //��������� ����� (�� 0 �� 9)
        cout << numbers[i] << " ";
    }

    return 0;
}