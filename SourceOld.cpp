/*	Penugasan Pemrograman TLS 
	Dibuat oleh		: Anggito Muhammad Amien
	NIU				: 498140
	Kelompok		: Tesla
	Judul Program	: Kalkulator Sederhana
*/
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double angka1=0, angka2=0, hasil=0, pangkat=0;
	int pilihan=0;

//Input Pilihan
	cout << "Selamat datang di program kalkulator sederhana:\n";
	cout << "1. Penjumlahan\n";
	cout << "2. Pengurangan (angka 1 - angka 2)\n";
	cout << "3. Perkalian\n";
	cout << "4. Pembagian (angka 1/angka 2)\n";
	cout << "5. Perpangkatan\n";
	cout << "6. Akar Kuadrat\n";
	cout << "7. Keluar\n";
	cout << "Silahkan pilih operasi yang diinginkan:";
	cin >> pilihan;

// Input Angka
	if (pilihan >= 1 && pilihan <= 4)
	{
		cout << "masukkan 2 angka";
		cout << "Angka 1:";
		cin >> angka1;
		cout << "angka 2:";
		cin >> angka2;
	}
		else if (pilihan == 5)
		{
			cout << "masukkan angka yang ingin dipangkatkan :";
			cin >> angka1;
			cout << "masukkan pangkat :";
			cin >> pangkat;
		}
		else if (pilihan == 6)
		{
			cout << "masukkan angka yang ingin di-akar kuadratkan:";
			cin >> angka1;
		}

// Mengoperasikan input angka berdasarkan Pilihan operasi;
	switch (pilihan)
	{
		case 1:
			hasil = angka1 + angka2;
			break;
		case 2:
			hasil = angka1 - angka2;
			break;
		case 3:
			hasil = angka1 * angka2;
			break;
		case 4:
			hasil = angka1 / angka2;
			break;
		case 5:
			hasil = pow(angka1, pangkat);
			break;
		case 6:
			hasil = sqrt(angka1);
			break;
		default:
			break;
	}

// menampilkan hasil operasi
	if (pilihan <= 1 && pilihan > 7)
	{
		cout << "hasil :" << hasil;
	}
	return 0;
}
