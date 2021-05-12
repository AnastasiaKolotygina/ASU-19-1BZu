#include "Programmer.h"

// Конструктор без параметров
Programmer::Programmer() :Person() {
	rating = 0;
}

// Конструктор с параметрами
Programmer::Programmer(string N, int A, float R) : Person(N, A) {
	rating = R;
}

// Конструктор копирования
Programmer::Programmer(const Programmer& S) {
	name = S.name;
	age = S.age;
	rating = S.rating;
}

// Деструктор
Programmer::~Programmer() {

}

// Селекторы
float Programmer::get_rating() {
	return rating;
}

// Модификаторы
void Programmer::set_rating(float R) {
	rating = R;
}

// Перегрузка операции присваивания
Programmer& Programmer::operator =(const Programmer& s) {
	// Проверка на самоприсваивание
	if (&s == this) return *this;

	name = s.name;
	age = s.age;
	rating = s.rating;

	return *this;
}

// Функция просмотра атрибутов класса с помощью указателя
void Programmer::Show() {
	cout << endl << "Имя: " << name << endl;
	cout << "ЗП: " << age << endl;
	cout << "Группа: " << rating << endl;
}

// Функция ввода значений атрибутов
void Programmer::Input() {
	cout << endl << "Введите имя: ";
	cin >> name;
	cout << endl << "Введите зп: ";
	cin >> age;
	cout << endl << "Введите группу: ";
	cin >> rating;
}