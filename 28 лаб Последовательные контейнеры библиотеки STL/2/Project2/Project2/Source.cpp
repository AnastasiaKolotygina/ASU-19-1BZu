#include <iostream>
#include <locale>
#include <cstdlib>
#include <vector>
#include "Time.h"

using namespace std;

typedef vector<Time> Vec; // ����������� ���� ������ ��� ������ � ��������

// ������� ������������ �������
Vec make_vector(int n) {
    Vec v;

    for (int i = 0; i < n; i++) {
        int m = rand() % 60;
        int s = rand() % 60;

        Time a(m, s);

        v.push_back(a); // ���������� �������� � ����� �������
    }

    return v;
}

// ������� ��� ������ �������
void print_vector(Vec v) {
    for (int i = 0; i < v.size(); i++) cout << v[i] << " | ";

    cout << endl;
}

// �������� �������� �� ������� pos
void del_pos(Vec& v, int pos) {
    v.erase(v.begin() + pos);
}

// ���������� �������� el � ������� pos
void add_pos(Vec& v, Time el, int pos) {
    v.insert(v.begin() + pos - 1, el);
}

// ���������� �������� el � ������ �������
void add_begin(Vec& v, Time el) {
    v.insert(v.begin(), el);
}

// ���������� �������� ���������������
Time average(Vec v) {
    Time a;
    int n = v.size();

    for (int i = 0; i < v.size(); i++) {
        a = a + v[i];
        cout << a << endl;
    }

    return a / n;
}

// ����� ������������� ��������
int max(Vec v) {
    Time m = v[0]; // ������������ �������
    int n = 0; // ����� ������������� ��������

    for (int i = 0; i < v.size(); i++) {
        if (m < v[i]) {
            m = v[i]; // �������� ������������ �������
            n = i; // �������� ����� ������������� ��������
        }
    }

    return n;
}

// ����� ������������ ��������
int min(Vec v) {
    Time m = v[0]; // ����������� �������
    int n = 0; // ����� ������������ ��������

    for (int i = 0; i < v.size(); i++) {
        if (m > v[i]) {
            m = v[i]; // �������� ����������� �������
            n = i; // �������� ����� ������������ ��������
        }
    }

    return n;
}


int main() {
    setlocale(LC_ALL, "rus");

    try {
        vector<Time> v;
        vector<Time>::iterator vi = v.begin();
        int n;

        cout << "������� ������ �������: ";
        cin >> n;

        v = make_vector(n);

        print_vector(v);

        int pos;

        pos = min(v);

        del_pos(v, pos);

        print_vector(v);

    }
    catch (int e) {
        cout << "ERROR_CODE_" << e << endl;
    }

    return 0;
}