#include <iostream>
#include <locale>
#include "Time.h"
#include "File_work.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    system("chcp 1251");
    system("cls");

    Time t, t1, t2;
    Time A(1, 30);
    int k, c;
    char file_name[30];

    do {
        cout << "1. ������� ����" << endl;
        cout << "2. ��������� ����" << endl;
        cout << "3. ������� ������� �� �����" << endl;
        cout << "4. ���������� �������� � ����" << endl;
        cout << "5. �������� ������� � �����" << endl;
        cout << "6. �������� ��������� ��������������� ��������� ��������" << endl;
        cout << "7. ���������� ���� ��������� � �������� ��������� �� 1:30" << endl;
        cout << "8. �������� K ������� ����� �������� � �������� �������" << endl;
        cout << "0. �����" << endl;
        cout << "> ";
        cin >> c;

        switch (c) {
        case 1:
            cout << "������� ��� �����: ";
            cin >> file_name;

            k = make_file(file_name);

            if (k < 0) cout << "���������� ������� ����";

            break;

        case 2:
            cout << "������� ��� �����: ";
            cin >> file_name;

            k = print_file(file_name);

            if (k == 0) cout << "���� ����" << endl;
            if (k < 0) cout << "���������� ��������� ����" << endl;

            break;

        case 3:
            cout << "������� ��� �����: ";
            cin >> file_name;

            int nom;

            cout << "������� ����� �������� ��� ��������: ";
            cin >> nom;

            k = del_file(file_name, nom);

            if (k < 0) cout << "���������� ��������� ����" << endl;

            k = print_file(file_name);

            if (k < 0) cout << "���������� ��������� ����" << endl;

            break;

        case 4:
            cout << "������� ��� �����: ";
            cin >> file_name;

            int nom1;

            cout << "������� ����� �������� ��� ����������: ";
            cin >> nom1;

            cout << "����� �������: " << endl;
            cin >> t1;

            k = add_file(file_name, nom1, t1);

            if (k < 0) cout << "���������� ��������� ����" << endl;
            if (k == 0) k = add_end(file_name, t1);

            break;

        case 5:
            cout << "������� ��� �����: ";
            cin >> file_name;

            int nom2;

            cout << "����� ��������: ";
            cin >> nom2;

            cout << "����� �������: ";
            cin >> t2;

            k = change_file(file_name, nom2, t2);

            if (k < 0) cout << "���������� ��������� ����" << endl;
            if (k == 0) cout << "��� ����� ������" << endl;

            break;

        case 6:
            cout << "������� ��� �����: ";
            cin >> file_name;

            k = del_compare(file_name);

            if (k == 0) cout << "���� ����" << endl;
            if (k < 0) cout << "���������� ��������� ����" << endl;

            break;

        case 7:
            cout << "������� ��� �����: ";
            cin >> file_name;

            k = add_time(file_name, A);

            if (k == 0) cout << "���� ����" << endl;
            if (k < 0) cout << "���������� ��������� ����" << endl;

            break;

        case 8:
            cout << "������� ��� �����: ";
            cin >> file_name;

            int k2;

            cout << "����� �������� ����� �������� ��������: ";
            cin >> k2;

            k = add_after(file_name, k2);

            if (k == 0) cout << "��� ����� ������" << endl;
            if (k < 0) cout << "���������� ��������� ����" << endl;

            break;
        }

    } while (c != 0);

    return 0;
}