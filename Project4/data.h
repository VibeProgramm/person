#pragma once
#include <iostream>
#include <string>

using namespace std;




class data
{
private:

	//���� ���� ����� ���
	int day;
	string month;
	int year;

public:
	data();
	
	//����������� ����������� ���� ����� ���
	data(int, string, int);
	~data();
};

