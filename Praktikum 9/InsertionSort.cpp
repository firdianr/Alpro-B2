//  Nama    : Firdian Rahmawan
//  NIM     : 24060121120018
//  Lab     : B2
//  Nama File : InsertionSort.cpp
//  Senin, 25 April 2022, 21.33 WIB

#include <iostream>

using namespace std;

int main()
{
    // Kamus
    int N, i, j, k, temp;
    int T[100];

    // Algoritma
    cout << "=== Insertion Sort ===" << endl;
    cout << "Jumlah Element = "; cin >> N; // Menentuan jumlah element(N)
    cout << "Masukkan Angka = ";
    for (i=0 ; i<N ; i++)
    {
        cin >> T[i]; // Menerima input dari dari elemen ke-1 hingga ke-N
    }

    for(k=1 ; k<N ;k++) // Mengambil Elemen yang akan dibandingkan, dimulai dari elemenke-2
    {
        temp = T[k]; // Element yang akan dibandingkan dengan elemen sebelumnya
        j = k-1; // indeks element pembanding(posisi-nya sebelum element yang diambil)
        while (j>=0 && temp<=T[j]) // ketika Element yang diambil lebih kecil dari element pembanding
        {
            T[j+1] = T[j]; // Element yang diambil akan ditukar dengan element pembanding
            j = j-1; // rekursif / mengecek ke element sebelumnya lagi
        }
        T[j+1] = temp;// Fungsi lanjutan untuk swap
    }

    cout << "Hasil setelah diurutkan (Insertion Sort) = " << endl;
    for (i=0 ; i<N ; i++)
    {
        cout << T[i] << " ";
    }

    return 0;
}
