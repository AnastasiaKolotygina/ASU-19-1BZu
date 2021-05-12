#include <iostream>
#include "Vector.h"
#include "Time.h"

int main() {
    setlocale(LC_ALL, "rus");

    // �������� ������� �� 5 ���������, ������������ 0
    Vector<int> a(5, 0);

    cout << a << endl;

    // ����� �������� ��������� �������
    cin >> a;

    cout << a << endl;

    // ��������� ����� �������� �������� 2 ����������� ������� �� �������
    a[2] = 100;

    cout << a << endl;

    Vector<int> b(10, 1);

    cout << b << endl;

    // ��������� ������� b �������� ������� a
    b = a;

    cout << b << endl;

    Vector<int> c(10, 0);

    // � ��������� ������� b ��������� ��������� 100 � ��������� ������� c
    c = b + 100;

    cout << c << endl;

    cout << "����� ������� a = " << a() << endl;

    Time t;

    cin >> t;
    cout << t << endl;

    Vector<Time> A(5, t);

    cin >> A;
    cout << A << endl;

    Vector<Time> B(10, t);

    cout << B << endl;

    B = A;

    cout << B << endl;
    cout << A[2] << endl;
    cout << "����� ������� A = " << A() << endl;

    B = A + t;

    cout << B << endl;

    return 0;
}