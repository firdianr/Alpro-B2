// Nama	: Firdian Rahmawan
// NIM	: 24060121120018
// Nama File	: mesinhika.cpp
// Tanggal	: 15 Mei 2022

#include <stdio.h>
#include <conio.h>
#include "mesinhika.c"

int main()
{
	// Kamus
	int JumlahKata;
	
	//Algoitma
	JumlahKata = HitungKata();
	printf("awal pita\n");
	START();
	while(!EOP())
	{
		printf("%c", CC);
		HitungKata();
	}
	printf("\nakhir pita");
	printf("\nTotal Kata = %d", i);
	getch();
	return 0;
}
