#pragma once
#include <string>

using namespace std;

class Student
{
	// Атрибуты
public:
	string fullname;
	string group;
	float averagemark;

public:
	Student(); // Конструктор без параметров
	Student(string, string, float); // Конструктор с параметрами
	Student(const Student&); // Конструктор копирования
	~Student(); // Деструктор

	// Селекторы
	string get_fullname();
	string get_group();
	float get_averagemark();

	// Модификаторы
	void set(string);
	void set_group(string);
	void set(float);

	// Просмотр атрибутов
	void Show();

	// Перегрузка операции присваивания
	Student& operator =(const Student& p)
	{
		// Проверка на самоприсваивание
		if (&p == this) return *this;
		fullname = p.fullname;
		group = p.group;
		averagemark = p.averagemark;

		return *this;
	}
	// Перегруженный оператор ввода
	friend istream& operator >>(istream& in, Student& p)
	{
		cout << endl << "Введите ФИО: ";
		in >> p.fullname;
		cout << endl << "Введите группу: ";
		in >> p.group;
		cout << endl << "Введите среднюю оценку: ";
		in >> p.averagemark;

		return in;
	}
	//Перегруженный оператор вывода
	friend ostream& operator <<(ostream& out, const Student& p)
	{
		out << endl << p.fullname << "Группа: " << p.group << " Средний балл: " <<p.averagemark<< endl;

		return out;
	}
};
class Graduate : public Student
{

	int diplomaGrade;
//public: string Graduate { get; set; }
public:
	Graduate() :Student() {} //Конструктор без параметров
	Graduate(string F, string G, float A, int diplomaGrade);
	~Graduate(); // Деструктор

	// Просмотр атрибутов
	void Show();
};
