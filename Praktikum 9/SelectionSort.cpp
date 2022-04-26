//  Nama    : Firdian Rahmawan
//  NIM     : 24060121120018
//  Lab     : B2
//  Nama File : SelectionSort.cpp
//  Senin, 26 April 2022, 20.22 WIB

#include <iostream>

using namespace std;

int terkecil(int [], int, int);

int main()
{
    // Kamus
    int N, i, j, temp, pos;
    int T[100];

    // Algoritma
    cout << "=== Selection Sort ===" << endl;
    cout << "Jumlah Element = "; cin >> N; // Menentuan jumlah element(N)
    cout << "Masukkan Angka = ";
    for (i=0 ; i<N ; i++)
    {
        cin >> T[i]; // Menerima input dari dari elemen ke-1 hingga ke-N
    }

    for(i=0 ; i<N ;i++) // Mengambil Elemen yang akan dibandingkan, dimulai dari elemenke-1
    {
        pos = terkecil(T, i, N); // index element terkecil
        temp = T[i];
        T[i] = T[pos]; // Element pertama ditukar dengan element terkecil
        T[pos] = temp;
    }

    cout << "Hasil setelah diurutkan (Selection Sort) = " << endl;
    for (i=0 ; i<N ; i++)
    {
        cout << T[i] << " ";
    }

    return 0;
}

int terkecil (int T[], int i, int N) // Fungsi untuk mencari posisi/index element terkecil
{
    int ele_kecil, posisi, j;
    ele_kecil = T[i]; // inisisasi elemen pertama sebagai element terkecil
    posisi = i; // index element pertama
    for (j=i+1 ; j<N ; j++) // element berikutnya di scan untuk mencari yang terkecil
    {
        if (T[j] < ele_kecil) // jika ditemukan element yang lebih kecil
        {
            ele_kecil = T[j]; // status/tahta element terkecil diberikan ke element tersebut
            posisi = j; // index element terkecil dirubah
        }
    }
    return posisi; //Output berupa index element terkecil
}
