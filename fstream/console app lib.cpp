//�����: ������ �������
//

#include <std_lib_facilities.h>

void menu()
{
	cout << "������� 1 ��� ������ � ����" << endl;
	cout << "������� 2 ��� ���������� �� �����" << endl;
	cout << "��� ������ ������� CTRL+Z" << endl;
}


int main()
{
	SetConsoleRU();


	fstream fs("text.txt", fstream::in | fstream::out | fstream::app);
	fstream os("text.txt", fstream::in | fstream::out | fstream::app);
	
	if (!fs.is_open())
	
		cout << "�� ������� ������� ����\n";
	
	else 
	{
		cout << "���� ������!\n";
		int value;
		
		
		string msg;
		string output;

		menu();

		while (cin >> value)

		{
			

			switch (value)
			{
			case 1:
				cout << "������� ��������" << endl;
				cin.ignore();
				getline(cin, msg);
				fs << msg << endl;
				fs.close();
				break;
			case 2:
				output = "";
				while (!os.eof())
				{
					os >> output;
					cout << output << endl;
				
				}
				//os.close();
				break;
			default: cout << "�� ����� ������� ��������";
				return -1; break;

			}
			cout << endl; menu();
		}

	}
	//stem("pause");
	return 0;
}