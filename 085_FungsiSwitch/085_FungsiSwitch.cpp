#include <iostream>
using namespace std;

int bilSatu, bilDua;

void input()
{
	cout << "Masukkan Bilangan Pertama = ";
	cin >> bilSatu;
	cout << "Masukkan Bilangan Kedua = ";
	cin >> bilDua;
}

float penjumlahan(float a, float b)
{
	return a + b;
}

float pembagian(float a, float b)
{
	return a / b;
}

float perkalian(float a, float b)
{
	return a * b;
}

float pengurangan(float a, float b)
{
	return a - b;
}

int main()
{
	int pilihan;

	do
	{
		system("CLS");
		cout << "===========================================" << endl;
		cout << "MENU" << endl;
		cout << "1. Penjumlahan " << endl;
		cout << "2. Pembagian " << endl;
	}
}




