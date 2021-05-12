#pragma once
#include <string>

using namespace std;

class Student
{
	// ��������
public:
	string fullname;
	string group;
	float averagemark;

public:
	Student(); // ����������� ��� ����������
	Student(string, string, float); // ����������� � �����������
	Student(const Student&); // ����������� �����������
	~Student(); // ����������

	// ���������
	string get_fullname();
	string get_group();
	float get_averagemark();

	// ������������
	void set(string);
	void set_group(string);
	void set(float);

	// �������� ���������
	void Show();

	// ���������� �������� ������������
	Student& operator =(const Student& p)
	{
		// �������� �� ����������������
		if (&p == this) return *this;
		fullname = p.fullname;
		group = p.group;
		averagemark = p.averagemark;

		return *this;
	}
	// ������������� �������� �����
	friend istream& operator >>(istream& in, Student& p)
	{
		cout << endl << "������� ���: ";
		in >> p.fullname;
		cout << endl << "������� ������: ";
		in >> p.group;
		cout << endl << "������� ������� ������: ";
		in >> p.averagemark;

		return in;
	}
	//������������� �������� ������
	friend ostream& operator <<(ostream& out, const Student& p)
	{
		out << endl << p.fullname << "������: " << p.group << " ������� ����: " <<p.averagemark<< endl;

		return out;
	}
};
class Graduate : public Student
{

	int diplomaGrade;
//public: string Graduate { get; set; }
public:
	Graduate() :Student() {} //����������� ��� ����������
	Graduate(string F, string G, float A, int diplomaGrade);
	~Graduate(); // ����������

	// �������� ���������
	void Show();
};
