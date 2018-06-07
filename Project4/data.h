#pragma once
#include <iostream>
#include <string>

using namespace std;




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

