// Nama File    : FaktorBil.cpp
// Deskripsi    : Memberikan faktor-faktor dari bilanan N.
// Pembuat      : Firdian Rahmawan - 24060121120018
// Tanggal Pembuatan : Selasa, 15 Maret 2022, 19.03 WIB

#include <stdio.h>

int main()
{
    // Kamus
    int N;
    int i;

    // Agoritma
    printf("Masukkan Nilai N = ");
    scanf("%d", &N);

    if (N<=0){
        printf("Nilai Harus Positif");
    }
    if (N>0 && i<=N){
        i = 1;
        for(i=1; i <= N; i++){
                if (N%i ==0){
                printf("| %d", i);
            }
        }
    }
    return 0;
}
