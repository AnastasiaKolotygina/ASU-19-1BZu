#include <iostream>
#include <locale>
#include "Node.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    system("chcp 1251");
    system("cls");

    Node* root = NULL;
    int menu;

    do {
        cout << "1. ������� ����� ������" << endl;
        cout << "2. �������� �������" << endl;
        cout << "3. �������� ������" << endl;
        cout << "4. ������� ���������� ��������� � �������� ������" << endl;
        cout << "0. �����" << endl;
        cout << "> ";
        cin >> menu;

        switch (menu) 
        {
        case 1:
            root = generate();

            break;

        case 2:
            root = add_element(root);

            break;

        case 3:
            show_tree(root);

            break;

        case 4:
            char key;
            int counter = 0;

            cout << "��� �������� ��������� � ��������� ������" << endl;
            cout << "������� ���� ������" << endl;
            cout << "> ";

            cin >> key;

            count(root, counter, key);

            // ����������� ��������� �������� ����� 1, ��� ��� ������ �������� ��� �������,
            // � � ���������������� ������ ����� ���������
            cout << "���������� �������� ��������� �����: " << counter << endl;

            break;
        }
    } while (menu != 0);

    return 0;
}