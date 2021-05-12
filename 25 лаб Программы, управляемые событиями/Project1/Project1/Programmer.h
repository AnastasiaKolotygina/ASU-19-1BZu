#pragma once
#include "Person.h"

// Класс Student наследуется от класса Person
class Programmer :
	public Person {

	// Атрибуты
private:
	float rating; // Рейтинг

public:
	// Конструкторы
	Programmer(); // Без параметров
	Programmer(string, int, float); // С параметрами
	Programmer(const Programmer&); // Копирования

	// Деструктор
	~Programmer();

	// Селекторы
	float get_rating();

	// Модификаторы
	void set_rating(float);

	// Операция присваивания
	Programmer& operator =(const Programmer&);

	// Функция просмотра атрибутов класса с помощью указателя
	void Show();

	// Функция ввода значений атрибутов
	void Input();
};