#include <iostream>
#include <locale>
#include <cstdlib>
#include <vector>

using namespace std;

typedef vector<double> Vec; // ����������� ���� ������ ��� ������ � ��������

// ������� ������������ �������
Vec make_vector(int n) {
    Vec v;

    for (int i = 0; i < n; i++) {
        int a = rand() % 100 - 50;

        v.push_back(a); // ���������� �������� � ����� �������
    }

    return v;
}

// ������� ��� ������ �������
void print_vector(Vec v) {
    for (int i = 0; i < v.size(); i++) cout << v[i] << " ";

    cout << endl;
}

// �������� �������� �� ������� pos
void del_pos(Vec& v, int pos) {
    v.erase(v.begin() + pos);
}

// ���������� �������� el � ������� pos
void add_pos(Vec& v, double el, int pos) {
    v.insert(v.begin() + pos - 1, el);
}

// ���������� �������� el � ������ �������
void add_begin(Vec& v, double el) {
    v.insert(v.begin(), el);
}

// ���������� �������� ���������������
double average(Vec v) {
    double a = 0;
    int n = v.size();

    for (int i = 0; i < v.size(); i++) {
        a += v[i];
        cout << a << endl;
    }

    return a / n;
}

// ����� ������������� ��������
int max(Vec v) {
    double m = v[0]; // ������������ �������
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
    double m = v[0]; // ����������� �������
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
        vector<double> v;
        vector<double>::iterator vi = v.begin();
        int n;

        cout << "������� ������ �������: ";
        cin >> n;

        v = make_vector(n);

        print_vector(v);

        // ���������� ��������
        double el = average(v);

        cout << "������� ��������������: " << el << endl;

        // ���������� � �������� �������
        int pos;

        cout << "������� ������� ��� ����������: ";
        cin >> pos;

        if (pos > v.size()) throw 110;

        add_pos(v, el, pos);

        print_vector(v);

        // ���������� �������� � ������ �������
        add_begin(v, el);

        print_vector(v);
    }
    catch (int e) {
        cout << "ERROR_CODE_" << e << endl;
    }

    return 0;
}