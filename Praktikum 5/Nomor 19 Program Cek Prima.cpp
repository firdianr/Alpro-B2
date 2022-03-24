// Nama File    : CekPrima.cpp
// Deskripsi    : Mengecek apakah sebuah bilangan merupakan bilangan prima atau bukan.
// Pembuat      : Firdian Rahmawan - 24060121120018
// Tanggal Pembuatan : Rabu, 23 Maret 2022, 20.17 WIB

#include <stdio.h>

int main()
{
    // Kamus
    int N; // Bilangan yang di input
    int i; // Counter
    int j; // Jumlah faktor

    // Algoritma
    printf("Masukkan Nilai N = ");
    if(scanf("%d", &N)){
        if (N<=0){
            printf("Nilai Harus Positif");
        }
        if (N>0){
            j=0 ;
            for( i=1; i <= N; i++)
                if (N%i ==0){
                    j = j+1;
                }
            if (j==2){
                printf("Bilangan Prima");
            }
            else{
                printf("Bukan Bilangan Prima");
            }
        }
    }
    else{
        printf("Input Salah");
    }

    return 0;
}
