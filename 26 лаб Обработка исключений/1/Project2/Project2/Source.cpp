#include <iostream>
#include <locale>
#include "Vector.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");

    // �������������� ����
    try {
        Vector x(2); // ������ �� ���� ���������
        Vector y; // ������ ������
        int i, n;

        cout << x; // ������ ������� x

        cout << "�����(-1 ��� 2): ";

        cin >> i;

        cout << x[i] << endl; // ���� i < 0 throw 57, i > 1 throw 58

        y = x + 3;

        cout << y;

        y = y.Add(4); // ���������� �������� � ������, ���� MAX_SIZE throw 70

        cout << y;
        cout << "������ ������� y: " << y() << endl;
        cout << "������� ��������� ������� �� �������: ";

        cin >> n;
        y = y - n; // ���� ������ ���� throw 90, ���� n ������ ������� ������� throw 98
        cout << "y - " << "n" << endl << y;


        --x; // �������� ������ �������� �� �������

        cout << x;

        --x;

        cout << x; // ������ ������

        --x; // ������������ ���������� throw 119
    }
    // ���������� ����������
    catch (int e) {
        cout << "VECTOR_ERROR_CODE_" << e << endl;
    }

    return 0;
}