// Nama File    : CekSempurna.cpp
// Deskripsi    : Menentukan apakah sebuah bilangan merupakan bilangan sempurna atau tidak.
// Pembuat      : Firdian Rahmawan - 24060121120018
// Tanggal Pembuatan : Rabu, 23 Maret 2022, 20.29 WIB

#include <stdio.h>

int main()
{
    // Kamus
    int N; // Bilangan yang di input
    int i; // Counter
    int j; // Penjumlahan faktor

    // Algoritma
    printf("Masukkan Nilai N = ");
    if(scanf("%d", &N)){
        if (N<=0){
            printf("Nilai Harus Positif");
        }
        if (N>0){
            j=0 ;
            for( i=1; i <N; i++)
                if (N%i ==0){
                    j = j+i;
                }
            if (j==N){
                printf("Bilangan Sempurna");
            }
            else{
                printf("Bukan Bilangan Sempurna");
            }
        }
    }
    else{
        printf("Input Salah");
    }

    return 0;
}
