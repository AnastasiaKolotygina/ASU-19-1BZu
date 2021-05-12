#include <string>
#include <iostream>
#include "student.h"

using namespace std;

// Конструктор без параметров
Student::Student() 
{
	fullname = "";
	group = "";
	averagemark = 0;

	cout << "Конструктор без параметров для объекта: " << endl;
}

// Конструктор с параметрами
Student::Student(string F, string G, float A) 
{
	fullname = F;
	group = G;
	averagemark = A;

	cout << "Конструктор с параметрами для объекта: " << this << endl;
}

// Конструктор копирования
Student::Student(const Student& T) 
{
	fullname = T.fullname;
	group = T.group;
	averagemark = T.averagemark;

	cout << "Конструктор копирования для объекта: " << this << endl;
}

// Деструктор
Student::~Student() 
{
	cout << "Деструктор для объекта: " << this << endl;
}
Graduate::Graduate(string F, string G, float A, int diplomaGrade) : Student(F, G, A)
{
	this->diplomaGrade = diplomaGrade;
} // Конструктор с параметрами
Graduate::~Graduate()
{
	cout << "Деструктор для объекта: " << this << endl;
}//Деструктор


// Селекторы
string Student::get_fullname() 
{
	return fullname;
}

string Student::get_group()
{
	return group;
}

float Student::get_averagemark() 
{
	return averagemark;
}

// Модификаторы
void Student::set(string F)
{
	fullname = F;
}

void Student::set_group(string G) 
{
	group = G;
}
//Перегрузка метода set
void Student::set(float A) 
{
	averagemark = A;
}
// Перегрузка операции присваивания
Student& operator =(const Student& p)
{
	// Проверка на самоприсваивание
	if (&p == this) return *this;
	first = p.first;
	second = p.second;

	return *this;
}
// Метод просмотра атрибутов
void Student::Show() 
{
	cout << endl << "ФИО: " << fullname << endl;
	cout << "Группа: " << group << endl;
	cout << "Средний балл: " << averagemark << endl << endl;
}
// Метод просмотра атрибутов
void Graduate::Show()
{
	cout << endl << "ФИО: " << fullname << endl;
	cout << "Группа: " << group << endl;
	cout << "Средний балл: " << averagemark << endl << endl;
	cout << "Оценка за дипломную работу: " << diplomaGrade << endl << endl;

}