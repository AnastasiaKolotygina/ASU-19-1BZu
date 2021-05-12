#include <string>
#include <iostream>
#include "student.h"

using namespace std;

// ����������� ��� ����������
Student::Student() 
{
	fullname = "";
	group = "";
	averagemark = 0;

	cout << "����������� ��� ���������� ��� �������: " << endl;
}

// ����������� � �����������
Student::Student(string F, string G, float A) 
{
	fullname = F;
	group = G;
	averagemark = A;

	cout << "����������� � ����������� ��� �������: " << this << endl;
}

// ����������� �����������
Student::Student(const Student& T) 
{
	fullname = T.fullname;
	group = T.group;
	averagemark = T.averagemark;

	cout << "����������� ����������� ��� �������: " << this << endl;
}

// ����������
Student::~Student() 
{
	cout << "���������� ��� �������: " << this << endl;
}
Graduate::Graduate(string F, string G, float A, int diplomaGrade) : Student(F, G, A)
{
	this->diplomaGrade = diplomaGrade;
} // ����������� � �����������
Graduate::~Graduate()
{
	cout << "���������� ��� �������: " << this << endl;
}//����������


// ���������
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

// ������������
void Student::set(string F)
{
	fullname = F;
}

void Student::set_group(string G) 
{
	group = G;
}
//���������� ������ set
void Student::set(float A) 
{
	averagemark = A;
}
// ���������� �������� ������������
Student& operator =(const Student& p)
{
	// �������� �� ����������������
	if (&p == this) return *this;
	first = p.first;
	second = p.second;

	return *this;
}
// ����� ��������� ���������
void Student::Show() 
{
	cout << endl << "���: " << fullname << endl;
	cout << "������: " << group << endl;
	cout << "������� ����: " << averagemark << endl << endl;
}
// ����� ��������� ���������
void Graduate::Show()
{
	cout << endl << "���: " << fullname << endl;
	cout << "������: " << group << endl;
	cout << "������� ����: " << averagemark << endl << endl;
	cout << "������ �� ��������� ������: " << diplomaGrade << endl << endl;

}