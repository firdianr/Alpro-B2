//  Nama    : Firdian Rahmawan
//  NIM     : 24060121120018
//  Lab     : B2
//  Nama File : BubbleSort.cpp
//  Senin, 25 April 2022, 20.40 WIB

#include <iostream>

using namespace std;

int main()
{
    // Kamus
    int N, i, j, temp;
    int T[100];

    // Algoritma
    cout << "=== Bubble Sort ===" << endl;
    cout << "Jumlah Element = "; cin >> N; // Menentuan jumlah element(N)
    cout << "Masukkan Angka = ";
    for (i=0 ; i<N ; i++)
    {
        cin >> T[i]; // Menerima input dari dari elemen ke-1 hingga ke-N
    }

    for(i=0 ; i<N ;i++) // Mengambil Elemen yang akan dibandingkan, dimulai dari elemenke-1
    {
        for (j=i+1 ; j<N ; j++) // Elemen pembanding, dimulai dari elemen ke-2
        {
            if(T[i]>T[j]) // Jika element yang diambil lebih besar dari elemen pembanding
            {
                temp = T[i];
                T[i] = T[j]; // Dilakukan swap / tukar posisi
                T[j] = temp;
            }
        }
    }

    cout << "Hasil setelah diurutkan (Bubble Sort) = " << endl;
    for (i=0 ; i<N ; i++)
    {
        cout << T[i] << " ";
    }

    return 0;
}
