#pragma once
#include <iostream>

using namespace std;

const int MAX_SIZE = 30;

class Vector {
	// ��������
protected:
	int size; // ������� ������
	int* beg; // ��������� �� ������ ������������� �������

public:
	// ������������
	Vector(); // ��� ����������
	Vector(int s); // � �����������
	Vector(int s, int* mas); // � �����������
	Vector(const Vector& v); // �����������

	// �����������
	~Vector();

	// ������
	Vector Add(int d);

	// ���������
	const Vector& operator =(const Vector& v);
	int operator[](int i);
	int operator ()();
	Vector operator +(int a);
	Vector operator -(int n);
	Vector operator --();


	// ���������� ������� �����-������
	friend istream& operator >>(istream& in, Vector& v);
	friend ostream& operator <<(ostream& out, const Vector& v);
};