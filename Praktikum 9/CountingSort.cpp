//  Nama    : Firdian Rahmawan
//  NIM     : 24060121120018
//  Lab     : B2
//  Nama File : CountingSort.cpp
//  Senin, 26 April 2022, 21.12 WIB

#include <iostream>

using namespace std;

int CountSort (int [], int);

int main()
{
    // Kamus
    int N, i;
    int T[100];

    // Algoritma
    cout << "=== Counting Sort ===" << endl;
    cout << "Jumlah Element = "; cin >> N; // Menentuan jumlah element(N)
    cout << "Masukkan Angka = ";
    for (i=0 ; i<N ; i++)
    {
        cin >> T[i]; // Menerima input dari dari elemen ke-1 hingga ke-N
    }

    CountSort(T, N);

    cout << "Hasil setelah diurutkan (Counting Sort) = " << endl;
    for (i=0 ; i<N ; i++)
    {
        cout << T[i] << " ";
    }

    return 0;
}

int CountSort (int T[], int N)
{
	// Kamus Lokal
	int output [100];
	int count [100];
	int max = T[0];
	
	// Menemukan Element Terbesar
	for (int i=1 ; i<N ; i++)
	{
		if (T[i] > max)
		{
			max = T[i];
		}
	}
	
	// inisialisasai count/jumlah element yang sama menjadi 0
	for (int i=0 ; i<=max ; ++i)
	{
		count[i] = 0;
	}
	
	// Menyimpan count/jumlah element jika terdapat sebuh element baru atau element yang sama
	for (int i=0 ; i<N ; i++)
	{
		count[T[i]]++;
	}
	
	// Menyimpan total jumlah element
	for (int i=1 ; i<=max ; i++)
	{
		count[i] += count[i-1];
	}
	
	// menemukan index 0riginal masing-masing element
	for(int i=N-1 ; i>=0 ; i--)
	{
		output[count[T[i]]-1] = T[i];
		count[T[i]]--;
	}
	
	// Menyalin element yang sudah diurutkan
	for (int i=0 ; i<N ; i++)
	{
		T[i] = output[i];
	}
}
