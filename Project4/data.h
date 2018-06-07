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

	//дата день мес€ц год
	int day;
	string month;
	int year;

public:
	data();
	
	//конструктор принимающий день мес€ц год
	data(int, string, int);
	~data();
};

