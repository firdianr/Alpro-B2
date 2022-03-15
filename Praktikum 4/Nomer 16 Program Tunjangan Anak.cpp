// Nama File    : TunjAnak.cpp
// Deskripsi    : Memberikan besarnya tunjangan anak yang diterima.
// Pembuat      : Firdian Rahmawan - 24060121120018
// Tanggal Pembuatan : Selasa, 15 Maret 2022, 10.46 WIB

#include <stdio.h>

int main()
{
    // Kamus
    int a;
    int b;
    int c;

    // Algoritma
    printf("Jumlah Gaji Pokok =");
    scanf("%d", &b);
    printf("Jumlah Anak =");
    if(scanf("%d", &a)){
    if (a<0){
        printf("Jumlah anak salah");
    }
    if (a>=0 && a<=3){
        c = a*0.1*b;
        printf("Jumlah Tunjangan = %d", c);
    }
    if (a>3){
        c = 0.3*b;
        printf("Jumlah Tunjangan = %d", c);
    }
    }
    else{
        printf("Masukkan Salah");
    }
    return 0;
}
