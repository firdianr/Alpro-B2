// Nama	: Firdian Rahmawan
// NIM	: 24060121120018
// Nama File : Palindrom.cpp
// Tanggal	: 18 Mei 2022

#include <stdio.h>
#include <conio.h>
#include "palindrom.c"

int main()
{
	// Kamus
	int JumlahKar;
	char Char[100];
	int i, j, cek;
	
	//Algoritma
	printf("==Cek Palindrom==\n");
	START();
	START();
	while(!EOP())
	{
		HitungKar();
	}
	JumlahKar = i;
	printf("Jumlah Karakter =  %d\n", JumlahKar);
	
	if(JumlahKar>=100)
    {
        printf("Karakter Terlalu Banyak (Maks 100)");
    }
    else
	{
        START();
        i = 0;
        while(!EOP())
		{
            Char[i] = CC;
            ADV();
            i++;
        }
        cek = Palindrom(Char);
        if (cek)
		{
            printf("Bukan palindrom");
		}
        else
		{
            printf("Palindrom");
		}
	}
	
	getch();
	return 0;
}

int Palindrom(char Char[]){
    // Kamus Lokal
    int JumlahKar;
    int i, j, cek;

    // Algoritma
    START();
    JumlahKar = i;
    cek = 0;
    for (i = 0; i < JumlahKar; i++) {
        if (Char[i] != Char[JumlahKar- i - 1]) {
            cek = 1;
            break;
        }
    }
    return cek;
}
