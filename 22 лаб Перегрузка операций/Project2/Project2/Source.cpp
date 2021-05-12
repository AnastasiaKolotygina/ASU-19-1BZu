#include <iostream>
#include <locale>
#include "Time.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    system("chcp 1251");
    system("cls");

    Time a;
    Time b;
    Time c;
    Time d;
    Time f;

    cout << "¬ведите a:" << endl;
    cin >> a;
    cout << "¬ведите b:" << endl;
    cin >> b;

    ++a;

    cout << "++a = " << a << endl;

    c = (a++) + b;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    cout << "ќпераци€ сравнени€" << endl;
    cout << "¬ведите d: " << endl;
    cin >> d;
    cout << "¬ведите f: " << endl;
    cin >> f;
    cout << "d = " << d << endl;
    cout << "f = " << f << endl;

    if (d == f) cout << "d и f равны!" << endl;

    else cout << "d и f не равны!" << endl;

    cout << "ќпераци€ сложени€" << endl;
    cout << d << " + " << f << " = " << d + f << endl;

    return 0;
}