#include <iostream>
#include <locale>
#include "Vector.h"
#include "Error.h"

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

        cout << x[i] << endl;

        y = x + 3;

        cout << y;

        y = y.Add(4);

        cout << y;
        cout << "������ ������� y: " << y() << endl;
        cout << "������� ��������� ������� �� �������: ";

        cin >> n;

        y = y - n;

        cout << "y - " << "n" << endl << y;

        --x; // �������� ������ �������� �� �������

        cout << x;

        --x;

        cout << x; // ������ ������

        --x;
    }
    // ���������� ����������
    catch (Error e) {
        e.what();
    }

    return 0;
}