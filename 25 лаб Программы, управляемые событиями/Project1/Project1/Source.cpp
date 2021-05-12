#include <iostream>
#include <locale>
#include "Object.h"
#include "Person.h"
#include "Programmer.h"
#include "Vector.h"
#include "Event.h"
#include "Dialog.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    system("chcp 1251");
    system("cls");

    Dialog D;
    D.Execute();

    Person* a = new Person;

    a->Input();
    a->Show();

    Programmer* b = new Programmer;

    b->Input();
    b->Show();

    Vector v(10);

    Object* p = a;

    v.Add(p);
    v.Show();
    v.Del();

    v.Add();
    v.Show();
    v.Del();

    cout << endl << "������ ������� v: " << v();

    return 0;
}