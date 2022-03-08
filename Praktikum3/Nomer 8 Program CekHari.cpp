// Nama File    : CekHari.cpp
// Deskripsi    : Memberikan nama hari sesuai dengan nomor hari yang diberikan.
// Pembuat      : Firdian Rahmawan - 24060121120018
// Tanggal Pembuatan : Senin, 7 Maret 2022, 20.14 WIB

#include <stdio.h>

int main()
{
    // kamus
    int i;

    // algoritma
    printf("Masukkan Nomor Hari : ");
    if(scanf("%d", &i))
    {
    if (i == 1){
        printf("Hari Senin");
    }
    if (i == 2){
        printf("Hari Selasa");
    }
    if (i == 3){
        printf("Hari Rabu");
    }
    if (i == 4){
        printf("Hari Kamis");
    }
    if (i == 5){
        printf("Hari Juamat");
    }
    if (i == 6){
        printf("Hari Sabtu");
    }
    if (i == 7){
        printf("Hari Minggu");
    }
    if ((i<0)||(i==0)||(i>7)){
        printf("Masukan nomor hari tidak tepat!");
    }
    }
    else{
        printf("Masukan nomor hari tidak tepat!!!");
    }

    return 0;
}
