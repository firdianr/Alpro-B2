#ifndef PALINDROM_H
#define PALINDROM_H

#ifndef MARK1
#define MARK1 ' '
#endif

#ifndef MARK2
#define MARK2 '.'
#endif

#ifndef ENTER
#define ENTER 10
#endif

char CC; // define state

//Prototype
void START();
// I.S. : Sembarang
// F.S. : CC adalah karakter pertama pita
//		jika CC==Mark, EOP menyala(true)
//		jika CC!=Mark, EOP padam(false)

void ADV();
// I.S. : CC!=Mark
// F.S. : CC adalah karakter berikutnya CC pada I.S.
// 		jika CC==Mark, EOP Menyala(true)

void HitungKar();

int EOP();
//true jika CC==Mark

#endif // MASINKAR_H INCLUDED
