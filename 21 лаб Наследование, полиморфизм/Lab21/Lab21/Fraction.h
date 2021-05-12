#pragma once
#include "Pair.h"
class Fraction :
    public Pair
{
public:
	// Конструктор без параметров
	Fraction() : Pair()
	{
		// Атрибут = 0;
	}

	// Конструктор с параметрами
	Fraction(int F, int S) : Pair(F, S) 
	{
		// Атрибут = А;
	}

	// Конструктор копирования
	Fraction(const Fraction& F) 
	{
		first = F.first;
		second = F.second;
	}

	// Деструктор
	~Fraction() 
	{
	}

	// Перегрузка операции присваивания
	Fraction& operator =(const Fraction& f) 
	{
		// Проверка на самоприсваивание
		if (&f == this) return *this;
		first = f.first;
		second = f.second;

		return *this;
	}

	// Операции сравнения
	bool operator ==(const Fraction& f) 
	{
		int firstOne = first;
		int secondOne = second;
		int firstTwo = f.first;
		int secondTwo = f.second;

		if ((firstOne == firstTwo) && (secondOne == secondTwo)) return true;

		return false;
	}

	bool operator !=(const Fraction& f) 
	{
		int firstOne = first;
		int secondOne = second;
		int firstTwo = f.first;
		int secondTwo = f.second;

		if ((firstOne != firstTwo) || (secondOne != secondTwo)) return true;

		return false;
	}

	bool operator >=(const Fraction& f) 
	{
		int firstOne = first;
		int secondOne = second;
		int firstTwo = f.first;
		int secondTwo = f.second;

		if (((firstOne > firstTwo) || ((firstOne == firstTwo) && (secondOne > secondTwo))) || ((firstOne == firstTwo) && (secondOne == secondTwo))) return true;

		return false;
	}

	bool operator <=(const Fraction& f) 
	{
		int firstOne = first;
		int secondOne = second;
		int firstTwo = f.first;
		int secondTwo = f.second;

		if (((firstOne < firstTwo) || ((firstOne == firstTwo) && (secondOne < secondTwo))) || ((firstOne == firstTwo) && (secondOne == secondTwo))) return true;

		return false;
	}

	bool operator >(const Fraction& f) 
	{
		int firstOne = first;
		int secondOne = second;
		int firstTwo = f.first;
		int secondTwo = f.second;

		if ((firstOne > firstTwo) || ((firstOne == firstTwo) && (secondOne > secondTwo))) return true;

		return false;
	}

	bool operator <(const Fraction& f) 
	{
		int firstOne = first;
		int secondOne = second;
		int firstTwo = f.first;
		int secondTwo = f.second;

		if ((firstOne < firstTwo) || ((firstOne == firstTwo) && (secondOne < secondTwo))) return true;

		return false;
	}

	// Выделение целой части дроби !!!!
	int Resolve() 
	{
		int r;

		if (second != 0) {
			r = first / second;
		}

		else {
			cout << endl << "!!! ОШИБКА : знаменатель равен 0 !!!" << endl;
			exit(111);
		}

		return r;
	}

	// Функция просмотра атрибутов класса с помощью указателя
	void Show() 
	{
		cout << endl << "Дробь: " << first << "," << second << endl;
	}

	// Глобальные функции ввода
	friend istream& operator >>(istream& in, Fraction& f)
	{
		cout << endl << "Введите целую часть: ";
		in >> f.first;
		cout << endl << "Введите дробную часть: ";
		in >> f.second;
		if (f.second < 0) {
			cout << "error";
			exit(130);
		}
		return in;
	}

	// Глобальные функции вывода
	friend ostream& operator <<(ostream& out, const Fraction& f)
	{
		out << endl << "Дробь: " << f.first << "," << f.second << endl;

		return out;
	}
};


