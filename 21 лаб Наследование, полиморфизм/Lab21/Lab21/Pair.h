#pragma once
#include <iostream>

using namespace std;
class Pair
{
public:
	int first;
	int second;

	// Конструктор без параметров
	Pair() 
	{
		first = 0;
		second = 0;
	}

	// Конструктор с параметрами
	Pair(int F, int S) 
	{
		first = F;
		second = S;
	}

	// Конструктор копирования
	Pair(const Pair& pair) 
	{
		first = pair.first;
		second = pair.second;
	}

	// Деструктор
	~Pair() 
	{

	}

	// Селекторы
	//Возвращают объект базового класса
	int get_first() 
	{
		return first;
	}

	int get_second() 
	{
		return second;
	}

	// Модификаторы
	//Получают на вход объект базового класса
	void set_first(int F) 
	{
		first = F;
	}

	void set_second(int S) 
	{
		second = S;
	}

	// Перегрузка операции присваивания
	Pair& operator =(const Pair& p)
	{
		// Проверка на самоприсваивание
		if (&p == this) return *this;
		first = p.first;
		second = p.second;

		return *this;
	}

	// Операции сравнения

	bool operator >(const Pair& p) 
	{
		int temp1 = first;
		int temp2 = second;
		int temp3 = p.first;
		int temp4 = p.second;

		if ((temp1 > temp3) || ((temp1 == temp3) && (temp2 > temp4))) 
			return true;

		return false;
	}

	// Функция просмотра атрибутов класса с помощью указателя
	void Show() 
	{
		cout << endl << "Пара: (" << first << "," << second << ")" << endl;
	}
	// Перегруженный оператор ввода
	friend istream& operator >>(istream& in, Pair& p)
	{
		cout << endl << "Введите первое число: ";
		in >> p.first;
		cout << endl << "Введите второе число: ";
		in >> p.second;

		return in;
	}
	//Перегруженный оператор вывода
	friend ostream& operator <<(ostream& out, const Pair& p)
	{
		out << endl << "Пара: (" << p.first << "," << p.second << ")" << endl;

		return out;
	}

};


