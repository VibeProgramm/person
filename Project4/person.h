#pragma once
#include <iostream>
#include <string>

using namespace std;

class person
{
private:
	//рост вес возраст
	int growth;
	int weight;
	int age;

	//имя фамилия
	string name;
	string sename;

	//Уровень развития
	string level;
	
public:
	person();
	

	virtual ~person();
};

