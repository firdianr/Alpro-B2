// Nama	: Firdian Rahmawan
// NIM	: 24060121120018
// Nama File	: invers.cpp
// Tanggal	: 18 Mei 2022

#include <iostream>

using namespace std;

int main()
{
	
	string Kata = "AKU ANAK DESA";
	
	string Invers;
	
//	cout<<"Masukkan Kata = ";cin>>Kata;
	
	for (int n = Kata.length()-1; n>=0; n--)
	{
		Invers.push_back(Kata[n]);
	}
	
	cout<<"Kata Asli = "<<Kata<<endl;
	cout<<"Hasil Invers = "<<Invers<<endl;
}
