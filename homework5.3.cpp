#include <iostream>
using namespace std;

int main() {
    //��������� ���������� 
    int N;

    // ������ ����� � ������������
    cout << "������� N: ";
    cin >> N;

    cout << "����� �� 1 �� " << N << ": ";

    // ���� for ��� ������ ����� �� 1 �� N
    for (int i = 1; i <= N; ++i) {
        cout << i << " ";
    }
    return 0;
}