#pragma once
#include <iostream>

using namespace std;
class Pair
{
public:
	int first;
	int second;

	// ����������� ��� ����������
	Pair() 
	{
		first = 0;
		second = 0;
	}

	// ����������� � �����������
	Pair(int F, int S) 
	{
		first = F;
		second = S;
	}

	// ����������� �����������
	Pair(const Pair& pair) 
	{
		first = pair.first;
		second = pair.second;
	}

	// ����������
	~Pair() 
	{

	}

	// ���������
	//���������� ������ �������� ������
	int get_first() 
	{
		return first;
	}

	int get_second() 
	{
		return second;
	}

	// ������������
	//�������� �� ���� ������ �������� ������
	void set_first(int F) 
	{
		first = F;
	}

	void set_second(int S) 
	{
		second = S;
	}

	// ���������� �������� ������������
	Pair& operator =(const Pair& p)
	{
		// �������� �� ����������������
		if (&p == this) return *this;
		first = p.first;
		second = p.second;

		return *this;
	}

	// �������� ���������

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

	// ������� ��������� ��������� ������ � ������� ���������
	void Show() 
	{
		cout << endl << "����: (" << first << "," << second << ")" << endl;
	}
	// ������������� �������� �����
	friend istream& operator >>(istream& in, Pair& p)
	{
		cout << endl << "������� ������ �����: ";
		in >> p.first;
		cout << endl << "������� ������ �����: ";
		in >> p.second;

		return in;
	}
	//������������� �������� ������
	friend ostream& operator <<(ostream& out, const Pair& p)
	{
		out << endl << "����: (" << p.first << "," << p.second << ")" << endl;

		return out;
	}

};


