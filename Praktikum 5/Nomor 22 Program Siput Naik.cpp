// Nama File    : SiputNaik.cpp
// Deskripsi    : Menghitung berapa hari yang dibutuhkan untuk siput dapat naik.
// Pembuat      : Firdian Rahmawan - 24060121120018
// Tanggal Pembuatan : Rabu, 23 Maret 2022, 20.29 WIB

#include <stdio.h>

int main()
{
    // Kamus
    int N; // Kedalaman lubang(meter)
    float i; // Counter posisi siput
    int j; // Penjumlahan Hari

    // Algoritma
    printf("Kedalaman(Meter) = ");
    scanf("%d", &N);

    if (N<=0){
        printf("Nilai Harus Positif");
    }
    if (N>0){
        j=1;
        for(i=0.3 ;i <= N ; i = i + 0.2)
            j = j+1;
            printf("Waktu yang diperlukan = %d", j);
            printf(" Hari.");
    }

    return 0;
}
