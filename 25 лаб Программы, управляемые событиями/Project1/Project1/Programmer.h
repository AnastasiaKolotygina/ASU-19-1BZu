#pragma once
#include "Person.h"

// ����� Student ����������� �� ������ Person
class Programmer :
	public Person {

	// ��������
private:
	float rating; // �������

public:
	// ������������
	Programmer(); // ��� ����������
	Programmer(string, int, float); // � �����������
	Programmer(const Programmer&); // �����������

	// ����������
	~Programmer();

	// ���������
	float get_rating();

	// ������������
	void set_rating(float);

	// �������� ������������
	Programmer& operator =(const Programmer&);

	// ������� ��������� ��������� ������ � ������� ���������
	void Show();

	// ������� ����� �������� ���������
	void Input();
};