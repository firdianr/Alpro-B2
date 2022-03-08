// Nama File    : CekSeriPositif.cpp
// Deskripsi    : Memberikan nilai total tahanan jika dirangkai seri dan tidak ada tahanan yang bernilai negatif
// Pembuat      : Firdian Rahmawan - 24060121120018
// Tanggal Pembuatan : Senin, 7 Maret 2022, 20.58 WIB

#include <stdio.h>

int main()
{
    // kamus
    int a, b, c, d;

    // algoritma
    printf("Masukkan Tahanan,\n1= ");
    scanf("%d", &a);
    printf("2= ");
    scanf("%d", &b);
    printf("3= ");
    scanf("%d", &c);
    if ((a>=0) && (b>=0) && (c>=0)){
        d = a + b + c;
        printf("Total Tahanan = %d", d);
    }
    else {
        printf("Masukan tahanan tidak boleh negatif");
    }
    return 0;
}
