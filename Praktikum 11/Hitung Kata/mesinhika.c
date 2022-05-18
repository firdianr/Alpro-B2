#ifndef MESINHIKA_C
#define MESINHIKA_C

#include <stdio.h>
#include "mesinhika.h"

// Definisi Pita
char Pita_karakter[100]="pitakar.txt";
static FILE *FILEKU;
static int retval;
int i=0; //counter total kata

// Body Prototype
void START()
// I.S. : Sembarang
// F.S. : CC adalah sembarang karakter pertama pita
//		jika CC==Mark, EOP menyala(true)
//		jika CC!=Mark, EOP padam(false)
{
	FILEKU = fopen(Pita_karakter, "r");
	retval = fscanf(FILEKU, "%c", &CC);
//	printf("%d ", retval);
//	printf("%c ", CC);
}

void ADV()
/* I.S. CC!=MARK */
/* F.S. CC adalah karakter berikutnya CC pada I.S */
/*      Jika CC==MARK, EOP menyala(true) */
{
   retval=fscanf(FILEKU,"%c",&CC);
   //printf("%d ",retval);
   //printf("%c ",CC);

   if(CC==MARK2)
   {
      fclose(FILEKU);
   }
}

int HitungKata()
{
	// Kamus
	
	
	// Algoritma
	retval = fscanf(FILEKU, "%c", &CC);
	
	if(CC==MARK1 || CC==MARK2)
	{
		if(CC==MARK1)
		{
			i=i+1;
			printf("(%d)", i);
		}
		else if (CC==MARK2)
		{
			i=i+1;
			printf("(%d)", i);
			fclose(FILEKU);
		}
	}
}

int EOP()
// true jika CC==Mark
{
	return(CC==MARK2);
}

#endif
