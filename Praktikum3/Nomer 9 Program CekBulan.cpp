// Nama File    : CekBulan.cpp
// Deskripsi    : Memberikan nama bulan sesuai dengan nomor bulan yang diberikan.
// Pembuat      : Firdian Rahmawan - 24060121120018
// Tanggal Pembuatan : Senin, 7 Maret 2022, 20.40 WIB

#include <stdio.h>

int main()
{
    // kamus
    int i;

    // algoritma
    printf("Masukkan Nomor Bulan : ");
    if(scanf("%d", &i)){
    if (i == 1){
        printf("Januari");
    }
    if (i == 2){
        printf("Februari");
    }
    if (i == 3){
        printf("Maret");
    }
    if (i == 4){
        printf("April");
    }
    if (i == 5){
        printf("Mei");
    }
    if (i == 6){
        printf("Juni");
    }
    if (i == 7){
        printf("Juli");
    }
    if (i == 8){
        printf("Agustus");
    }
    if (i == 9){
        printf("September");
    }
    if (i == 10){
        printf("Oktober");
    }
    if (i == 11){
        printf("November");
    }
    if (i == 12){
        printf("Desember");
    }
    if ((i<0)||(i==0)||(i>12)){
        printf("Masukan nomor bulan tidak tepat!");
    }
    }
    else{
        printf("Masukan nomor bulan tidak tepat!!!");
    }
    return 0;
}
