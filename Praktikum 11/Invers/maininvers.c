// Nama	: Firdian Rahmawan
// NIM	: 24060121120018
// Nama File	: invers.cpp
// Tanggal	: 18 Mei 2022

#include <stdio.h>
#include <string.h>
#include <conio.h>
#include "invers.c"

int main()
{
	// Kamus
	char T[50]="pitakar.txt";
	int JumlahKar;
	int j;
	
	// Algoritma
	printf("=== Invers ===\n");
	START();
	
	START();
	while(!EOP())
	{
		HitungKar();
	}
	JumlahKar = i;
	printf("Jumlah Karakter =  %d\n", JumlahKar);
	
	START();
	printf("Kata = ");
	while(!EOP())
	{
		printf("%c", CC);
		ADV();
	}
	
	printf("\nHasil invers = ");
	
	if(JumlahKar>=50)
	{
		printf("Jumlah Karakter Terlalu Banyak");
	}
	
	else
	{
		// Ini harus bagaimana?
		// Sunguh Sedih hati ini sedih.....
		// Tak temukan lagi jawabannya...
		T[50] = CC;
		
		for(j = JumlahKar-1 ; j>=0 ; j--)
		{
			printf("%s", T[j]);
		}
	}
	
	getch();
	return 0;
}
