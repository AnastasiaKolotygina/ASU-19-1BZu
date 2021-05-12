#include <iostream>
#include <locale>
#include "Vector.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");

    // �������� ������� �� 5 ���������, ������������ 0
    Vector a(5);

    cout << a << endl;

    // ����� �������� ��������� �������
    cin >> a;

    cout << a << endl;

    // ��������� ����� �������� �������� 2
    a[2] = 100;

    cout << a << endl;

    Vector b(10);

    cout << b << endl;

    // ��������� ������� b �������� ������� a
    b = a;

    cout << b << endl;

    Vector c(10);

    // � ��������� ������� b ��������� ��������� 100 � ��������� ������� c
    c = b + 100;

    cout << c << endl;

    cout << "����� ������� A = " << a() << endl;

    // ����� �������� 1 �������� ����������� ���������
    cout << *(a.first()) << endl;

    // ��������� ��������� �� 1 �������
    Iterator i = a.first();

    // ����������� ���������
    ++i;

    // ����� �������� 2 �������� ����������� ���������
    cout << *i << endl;

    // ����� �������� ����� �������
    for (i = a.first(); i != a.last(); ++i) cout << *i << " ";

    return 0;
}