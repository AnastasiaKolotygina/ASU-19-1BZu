#include "Programmer.h"

// ����������� ��� ����������
Programmer::Programmer() :Person() {
	rating = 0;
}

// ����������� � �����������
Programmer::Programmer(string N, int A, float R) : Person(N, A) {
	rating = R;
}

// ����������� �����������
Programmer::Programmer(const Programmer& S) {
	name = S.name;
	age = S.age;
	rating = S.rating;
}

// ����������
Programmer::~Programmer() {

}

// ���������
float Programmer::get_rating() {
	return rating;
}

// ������������
void Programmer::set_rating(float R) {
	rating = R;
}

// ���������� �������� ������������
Programmer& Programmer::operator =(const Programmer& s) {
	// �������� �� ����������������
	if (&s == this) return *this;

	name = s.name;
	age = s.age;
	rating = s.rating;

	return *this;
}

// ������� ��������� ��������� ������ � ������� ���������
void Programmer::Show() {
	cout << endl << "���: " << name << endl;
	cout << "��: " << age << endl;
	cout << "������: " << rating << endl;
}

// ������� ����� �������� ���������
void Programmer::Input() {
	cout << endl << "������� ���: ";
	cin >> name;
	cout << endl << "������� ��: ";
	cin >> age;
	cout << endl << "������� ������: ";
	cin >> rating;
}