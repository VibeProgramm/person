#pragma once
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

ifstream fin;
ofstream fout;



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

