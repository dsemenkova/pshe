#include<iostream>
#include<string.h>
#include<Windows.h>
using namespace std;

struct Kvit { // �������� ������ "���������"
				// ���������� �������� � ������ ������ 
private:
	int nomer; // �����
	char data[20];  // ����
	float summ;      // �����
				 // ������ ��������� �������� � ������ ������
public:
	// �������������� ������
	void set_nomer(int new_nomer) {
		nomer= new_nomer; // �������� ������
	}
	// �������������� ����
	void set_data(char *new_data) {
		strcpy_s(data, new_data); // ��������������
	}
	// �������������� �����
	void set_summ(float new_summ) {
		summ = new_summ; // �������� ��������
	}
	// ����� ��� ��������� ������
	int get_nomer() {
		return nomer; // ���������� ��������� �� ������
	}
	// ����� ��� ��������� ����
	char *get_data() {
		return data; // ���������� ��������� �� ������
	}
	// ����� ��� ��������� �����
	float get_summ() {
		return summ; // ���������� ��������
	}
	// ����� ������ ������� ������ �� �����
	void print() {
		cout << "�����: " << nomer << " ����: " << data << " �����: " << summ << endl;
	}
};
int main() {
	SetConsoleOutputCP(1251); // ��� ����������� ����������� ������� ���������
	SetConsoleCP(1251); // ��� ����������� ����� ������� ���������

	Kvit arr[5]; // ������ �������

	int nomer; // ���������� ��� ����� ����������
	char data[20];
	float summ;

	for (int i = 0; i < 5; i++) { // ���� ����� ����������
		// ������ �����
		cout << "�����: ";
		cin >> nomer;
		// ������ ����
		cout << "����: ";
		cin >> data;
		// ������ �����
		cout << "�����: ";
		cin >> summ;

		// ������������� �������� ������ � �������
		arr[i].set_nomer(nomer);
		arr[i].set_data(data);
		arr[i].set_summ(summ);
	}

	// ������� ���������� �� ����� c ������� ����������� ������ ������
	//for (int i = 0; i < 2; i++) { // ��������������������
	//arr[i].print();
	//	}

	// ������� ���������� �� ����� c ������� ���������� ������� ��������� ���������
	for (int i = 0; i < 5; i++) { // ��������������������
		cout << "�����: " << arr[i].get_nomer() << " ����: " << arr[i].get_data() << " �����: " << arr[i].get_summ() << endl;
	}
	system("pause");
	return 0;
}