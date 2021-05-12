#include <iostream>
#include <string>
#include <cstdio>
#include <locale>
#include "student.h"

using namespace std;

// ������� ��� �������� ������� ��� ����������
Student make_student() 
{
    string f;
    string g;
    float a;

    cout << endl << "������� ���: ";
    getline(cin, f);
    cout << endl << "������� ������: ";
    getline(cin, g);
    cout << endl << "������� ������� ����: ";
    cin >> a;
    cout << endl;

    Student s(f, g, a);

    return s;
}

// ������� ��� �������� ������� ��� ���������
void print_student(Student s) 
{
    s.Show();
}

int main() {
    setlocale(LC_ALL, "rus");
    system("chcp 1251");
    system("cls");

    // ����������� ��� ����������
    Student s1;
    s1.Show();

    // ����������� � �����������
    Student s2("������ ������ ��������", "ST-HL", 45);
    s2.Show();

    // ����������� �����������
    Student s3 = s2;
    s3.Show();

    // �������������
    s3.set("Michail Viktor");
    s3.set_group("UBCS");
    s3.set(75);

    // �������, ����������� ������ ������������ ������
    print_student(s3);

    // �������, ������������ ������, ��� ���������
    s1 = make_student();
    s1.Show();

    // ����� � �������������� ����������
    string FN;
    string GP;
    float AM;

    FN = s2.get_fullname();
    GP = s2.get_group();
    AM = s2.get_averagemark();

    cout << "���: " << FN << endl;
    cout << "������: " << GP << endl;
    cout << "������� ����: " << AM << endl << endl;

    // ������������� ������������� �������� ������������
    Student s4 = Student();
    s4 = s3;
    cout << endl << s4 << endl;
    // ������������� �������������� ��������� �����
    cin >> s4;

    // ������������� �������������� ��������� ������
    cout << s4 << endl << endl;

    //�������� ������� ������������ ������
    Graduate g = Graduate("������� ���� ����������", "��-19", 4.2, 5);
    g.Show();

    return 0;
}