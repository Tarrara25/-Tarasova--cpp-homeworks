#include <iostream>  
#include <string>  // ��� ������ �� ��������

using namespace std;

int main() {
    // ���������� � ����������� ������
    string word;
    cout << "������� ������: ";
    getline(cin, word); // ��������� ������

    // ������� ������ ������� ������
    cout << "������ ������: " << word[0];

    return 0;
}