/* Hochschule Bonn-Rhein-Sieg
FB Informatik
Programmierung in C - SoSe 2014
Übung 1: Einführung in die Programmiersprache C
Aufgabe 1: Datentypen
*/

#include <stdio.h>

int main()
{
    //Aufgabe A
    printf("\n \t char enthält : %d Byte", sizeof(int));




















	int a=125, b=-39;
	// Teilaufgabe a.
	printf("\n __________________________________ ");
	printf("\n Wortbreiten:");
	printf("\n \t char \t: %d Byte",sizeof(char));
	printf("\n \t int \t: %d Byte",sizeof(int));
	printf("\n \t float: %d Byte",sizeof(float));
	printf("\n \t double: %d Byte",sizeof(double));
	printf("\n----------------------------------");
	/* with modifier short */
	printf("\n\t short int: %d Byte",sizeof(short int));
	printf("\n----------------------------------");
	/* with modifier long */
	printf("\n\tlong int: %d Byte",sizeof(long int));
	printf("\n\tlong double: %d Byte",sizeof(long double));

	// Teilaufgabe b.
	printf("\n__________________________________");
	printf("\nZahlen:");
	printf("\n\tals Zeichen: a=%c b=%c",a,b);
	printf("\n\tals vorzeichenlose Zahl: a=%u b=%u",a,b);
	printf("\n\tals Hexadezimalzahl: a=0x%x b=0x%x",a,b);
	printf("\n\tals vorzeichenbehaftete Zahl: a=%d b=%d",a,b);
	printf("\n\tals Gleitkommazahl mit einfacher Genauigkeit: a=%.2f b=%.2f",(float)a,(float)b);
	printf("\n\tals Gleitkommazahl mit doppelter Genauigkeit: a=%e b=%e",(double)a,(double)b);
	printf("\n__________________________________");
	printf("\n\n");
}

