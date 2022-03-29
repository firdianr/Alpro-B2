// Nama File    : Tetris.cpp
// Deskripsi    : Menampilkan susunan karakter '*'.
// Pembuat      : Firdian Rahmawan - 24060121120018
// Tanggal Pembuatan : Selasa, 29 Maret 2022, 09.36 WIB

#include<stdio.h>
#include<iostream>

int main()
{
    // Kamus
    int i;
    int j;
    int n;

    // Algoritma
    printf("Masukkan Jumlah Baris = ");
    scanf("%d", &n);
    
    if(n<=0)
    {
        printf("Masukan Harus Positif");
    }
    if(n>0)
    {
    for (i=1 ; i<=n ; i++)
    {
        for (j=1 ; j<=i ; j++)
        {
            printf("* ");
        }
        printf("\n");
    }}

    return 0;
}
