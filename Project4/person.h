#pragma once
#include <iostream>
#include <string>

using namespace std;

class person
{
private:
	//���� ��� �������
	int growth;
	int weight;
	int age;

	//��� �������
	string name;
	string sename;

	//������� ��������
	string level;
	
public:
	person();
	

	virtual ~person();
};

