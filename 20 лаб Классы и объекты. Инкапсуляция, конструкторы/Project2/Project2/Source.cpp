
#include <iostream>
#include <locale>
#include "ipart.h"

using namespace std;

ipart make_ipart(unsigned F, unsigned S) {
    ipart t; // ������� ��������� ����������
    t.Init(F, S); // ���������������� ���� ���������� t � ������� ���������� �������
    return t; // ������� �������� ����������
}

int main() {
    setlocale(LC_ALL, "rus");

    // ������ ����� ����������� ���������� A � B
    cout << endl << "����������� ���������� A, B" << endl;

    ipart A;
    ipart B;

    A.Init(3, 2); // ������������� �������������� �������� ���������� A
    B.Read(); // ���� �������� ����� ���������� B
    A.Show(); // ����� �������� ����� ���������� A
    B.Show(); // ����� �������� ����� ���������� B

    cout << "����� ����� ����� A (" << A.first << "/" << A.second << ") �����: " << A.Resolve() << endl;
    cout << "����� ����� ����� B (" << B.first << "/" << B.second << ") �����: " << B.Resolve() << endl;

    // ������ ����� ���������
    cout << endl << "��������� X" << endl;

    ipart* X = new ipart; // ��������� ������ ��� ������������ ����������

    X->Init(5.6, 2.3); // �������������
    X->Show(); // ����� �������� �����
    X->Resolve(); // ���������� ����� �����

    cout << "����� ����� ����� X (" << X->first << "/" << X->second << ") �����: " << X->Resolve() << endl;

    // ������ ����� ����������� ������
    cout << endl << "����������� ������" << endl;

    ipart mas[3];

    for (int i = 0; i < 3; i++) mas[i].Read();
    for (int i = 0; i < 3; i++) mas[i].Show();
    for (int i = 0; i < 3; i++) {
        mas[i].Resolve();
        cout << "����� ����� ����� Static I : " << i << " (" << mas[i].first << "/" << mas[i].second << ") �����: ";
        cout << mas[i].Resolve() << endl;
    }

    // ������ ����� ������������ ������
    cout << endl << "������������ ������" << endl;

    ipart* p_mas = new ipart[3];

    for (int i = 0; i < 3; i++) p_mas[i].Read();
    for (int i = 0; i < 3; i++) p_mas[i].Show();
    for (int i = 0; i < 3; i++) {
        p_mas[i].Resolve();
        cout << "����� ����� ����� Dynamic I : " << i << " (" << p_mas[i].first << "/" << p_mas[i].second << ") �����: ";
        cout << p_mas[i].Resolve() << endl;
    }

    // ������ ����� ����� ������� make_ipart()
    cout << endl << "������� make_ipart()" << endl;

    unsigned y;
    unsigned z;

    cout << endl << "������� �������� first: ";
    cin >> y;
    cout << endl << "������� �������� second: ";
    cin >> z;

    ipart F = make_ipart(y, z);
    F.Show();
    F.Resolve();

    cout << "����� ����� ����� F (" << F.first << "/" << F.second << ") �����: " << F.Resolve() << endl;

    return 0;
}