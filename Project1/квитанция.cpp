#include<iostream>
#include<string.h>
#include<Windows.h>
using namespace std;

struct Kvit { // Описание класса "Квитанция"
				// внутренние свойства и методы класса 
private:
	int nomer; // номер
	char data[20];  // дата
	float summ;      // сумма
				 // внешне доступные свойства и методы класса
public:
	// методустановки номера
	void set_nomer(int new_nomer) {
		nomer= new_nomer; // копируем строку
	}
	// методустановки даты
	void set_data(char *new_data) {
		strcpy_s(data, new_data); // копируемстроку
	}
	// методустановки суммы
	void set_summ(float new_summ) {
		summ = new_summ; // копируем значение
	}
	// метод для получения номера
	int get_nomer() {
		return nomer; // возвращаем указатель на строку
	}
	// метод для получения даты
	char *get_data() {
		return data; // возвращаем указатель на строку
	}
	// метод для получения суммы
	float get_summ() {
		return summ; // возвращаем значение
	}
	// метод вывода свойств класса на экран
	void print() {
		cout << "Номер: " << nomer << " Дата: " << data << " Сумма: " << summ << endl;
	}
};
int main() {
	SetConsoleOutputCP(1251); // для корректного отображения русской кодировки
	SetConsoleCP(1251); // для корректного ввода русской кодировки

	Kvit arr[5]; // массив классов

	int nomer; // переменные для ввода информации
	char data[20];
	float summ;

	for (int i = 0; i < 5; i++) { // цикл ввода информации
		// вводим номер
		cout << "Номер: ";
		cin >> nomer;
		// вводим дату
		cout << "Дата: ";
		cin >> data;
		// вводим сумму
		cout << "Сумма: ";
		cin >> summ;

		// устанавливаем свойства класса в массиве
		arr[i].set_nomer(nomer);
		arr[i].set_data(data);
		arr[i].set_summ(summ);
	}

	// выводим информацию на экран c помощью встроенного метода вывода
	//for (int i = 0; i < 2; i++) { // циклвыводаинформации
	//arr[i].print();
	//	}

	// выводим информацию на экран c помощью встроенных методов получения информаци
	for (int i = 0; i < 5; i++) { // циклвыводаинформации
		cout << "Номер: " << arr[i].get_nomer() << " Дата: " << arr[i].get_data() << " Сумма: " << arr[i].get_summ() << endl;
	}
	system("pause");
	return 0;
}