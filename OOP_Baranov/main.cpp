#include <iostream>
#include <windows.h> 
#include "Correctinput.h"

using namespace std;

int main()
{
	wcout.imbue(locale(""));
	wcin.imbue(locale(""));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	while (true) {
        wcout << L"--- Меню ---" << endl;
        wcout << L"1. Добавить солдата" << endl;
        wcout << L"2. Показать взвод(вывести всех солдат)" << endl;
        wcout << L"3. Считать из файла" << endl;
        wcout << L"4. Записать в файл" << endl;
        wcout << L"5. Очистить список" << endl;
        wcout << L"0. Выход" << endl;
        wcout << L"Выберите пункт: " << endl;

        int x = readNumber<int>(0, 5);

        switch (x) {
        case 0:
            cout << "Выход из программы." << endl;
            return 0;
        case 1:
            wcout << L"Неверная команда!" << endl;
            break;
        case 2:
            wcout << L"Неверная команда!" << endl;
            break;
        case 3:
            wcout << L"Неверная команда!" << endl;
            break;
        case 4:
            wcout << L"Неверная команда!" << endl;
            break;
        case 5:
            wcout << L"Неверная команда!" << endl;
            break;
        }
	}
}

