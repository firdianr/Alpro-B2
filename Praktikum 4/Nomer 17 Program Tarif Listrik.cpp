// Nama File    : TarifPLN.cpp
// Deskripsi    : Memberikan besarnya tarif listrik yang harus dibayarkan.
// Pembuat      : Firdian Rahmawan - 24060121120018
// Tanggal Pembuatan : Selasa, 15 Maret 2022, 11.23 WIB

#include <stdio.h>

int main()
{
    // Kamus
    int i; //Golongan
    int a; //Pemakaian
    int b; //Tarif Listrik

    // Algoritma
    printf("Masukkan Golongan = ");
    scanf("%d", &i);
    printf("Pemakaian Daya (kWh) = ");
    scanf("%d", &a);

    if (i==1 || i==2)
        {if (i==1){
            if (a<100){
                b = 100000;
                printf("Tarif Listrik = %d", b);
            }
            if (a>=100 && a<1000){
                b = 1000 * a;
                printf("Tarif Listrik = %d", b);
            }
            if (a>=1000){
                b = 1.1 * a * 1000;
                printf("Tarif Listrik = %d", b);
            }
        }
        if (i==2){
            if (a<100){
                b = 200000;
                printf("Tarif Listrik = %d", b);
            }
            if (a>=100 && a<1000){
                b = 2000 * a;
                printf("Tarif Listrik = %d", b);
            }
            if (a>=1000){
                b = 1.1 * a * 2000;
                printf("Tarif Listrik = %d", b);
            }
        }
    }
    else{
        printf("Golongan Tidak terdaftar");
    }
    return 0;
}
