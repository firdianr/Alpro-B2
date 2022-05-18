#ifndef PALINDROM_C
#define PALINDROM_C

#include <stdio.h>
#include "palindrom.h"

// Definisi Pita
char Pita_karakter[100]="pitakar.txt";
static FILE *FILEKU;
static int retval;
int i=0; //counter total karakter

// Body Prototype
void START()
{
	FILEKU = fopen(Pita_karakter, "r");
	retval = fscanf(FILEKU, "%c", &CC);
//	printf("%d ", retval);
//	printf("%c ", CC);
}
// I.S. : Sembarang
// F.S. : CC adalah sembarang karakter pertama pita
//		jika CC==Mark, EOP menyala(true)
//		jika CC!=Mark, EOP padam(false)

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

void HitungKar()
// I.S. : CC!=Mark
// F.S. : CC adalah karakter berikutnya CC pada I.S.
//		jika CC==Mark, EOP menyala(true)
{
	retval = fscanf(FILEKU, "%c", &CC);
//	printf("%d ", retval);
//	printf("%c ", CC);
	
	if(CC!=MARK1 || CC!=MARK2)
	{
		i=i+1;
	}
}

int EOP()
// true jika CC==Mark
{
	return(CC==MARK2);
}

#endif
