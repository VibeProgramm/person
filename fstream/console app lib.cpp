//Автор: Мурзин Алексей
//

#include <std_lib_facilities.h>

void menu()
{
	cout << "Введите 1 для записи в файл" << endl;
	cout << "Введите 2 для считывание из файла" << endl;
	cout << "Для выхода введите CTRL+Z" << endl;
}


int main()
{
	SetConsoleRU();


	fstream fs("text.txt", fstream::in | fstream::out | fstream::app);
	
	if (!fs.is_open())
	
		cout << "Не удалось открыть файл\n";
	
	else 
	{
		cout << "Файл открыт!\n";
		int value;
		
		
		string msg;

		menu();

		while (cin >> value)

		{
			

			switch (value)
			{
			case 1:
				cout << "Введите собщение" << endl;
				cin.ignore();
				getline(cin, msg);
				fs << msg << endl;
				break;
			case 2:
				msg = "";
				while (!fs.eof())
				{
					fs >> msg;
					cout << msg << endl;
				
				}
				break;
			default: cout << "Не верно введено значение";
				return -1; break;

			}
			cout << endl; menu();
		}

	}
	//stem("pause");
	return 0;
}