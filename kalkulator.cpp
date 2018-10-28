/* ini adalah program kalkulator sederhana, pertama menggunakan
if, else if, dan else dan yang kedua menggunakan switch case*/

#include <iostream>
using namespace std;

int main()
{
	float a, b, hasil;
	char cal;

	cout << "masukan nilai pertama: ";
	cin >> a;
	cout << "pilih penjumlahan (-, +, *, atau /): ";
	cin >> cal;
	cout << "masukan nilai kedua: ";
	cin >> b;

	if (cal == '-'){
		hasil = a - b;
	} else if (cal == '+'){
		hasil = a + b;

	} else if (cal == '/'){
		hasil = a / b;
		
	} else if (cal == '*'){
		hasil = a * b;
		
	} else {
		cout << "\noperator penjumlahan '" << cal << "' tidak ditemukan\n" <<endl;
	}

	/* ini adalah versi dengan menggunakan switch case
	switch (cal)
	{
		case '-':
		hasil = a - b;
			break;
		case '+':
		hasil = a + b;
			break;
		case '*':
		hasil = a * b;
			break;
		case '/':
		hasil = a / b;
			break;
		default:
		cout << "\noperator penjumlahan '" << cal << "' tidak ditemukan\n";
	}*/

	cout << "\nhasil penjumlahan ";
	cout << a << cal << b; /* ini digunakan untuk print nilai
	dan operator yang di input user */
	cout << " = " << hasil <<endl;
	return 0;
}
/* dalam program ini penggunaan if, else if, else ataupun switch case
menampilkan hasil yang sama tidak ada perbedaan antara keduanya */