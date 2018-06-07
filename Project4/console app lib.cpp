//Автор: Мурзин Алексей
//

#include <std_lib_facilities.h>
#include "person.h"
#include "data.h"


int main()
{
	SetConsoleRU();

	fstream fs;
	fs.open("text.txt");
	if (fs.is_open())
	{
		cout << "Yes" << endl;
	}
	else cout << "No" << endl;
	
	system("pause");
	return 0;
}