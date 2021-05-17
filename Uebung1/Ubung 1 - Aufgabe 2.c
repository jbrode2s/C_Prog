/* Hochschule Bonn-Rhein-Sieg
FB Informatik
Programmierung in C - SoSe 2014
Übung 1: Einführung in die Programmiersprache C
Aufgabe 2: mathematische Operationen
op.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
	float x;

	x = atof(argv[1]);

	printf("\n");
	printf(">> Berechnungen mit Eingabe = %f:\n",x);
	printf("__________________________________\n\n");
	printf("Quadrat    = %f\n"    , x*x);
	printf("x modulo 3 = %d\n"    , (int)x%3);
	printf("Wurzel x   = %g\n"   , sqrt((double) x));
	printf("Formel     = %g\n"   , (double) ((5*x+3)/(7*(x-1.5))));
	printf("Bitversch. = %#04x\n" , ((int)x)<<2);
	printf("bitw. UND  = %#04x\n" , ((int)x) & 0x00F0);
	printf("Inkrement  = %d\n"    , (int)++x);
	printf("\n");
	printf("__________________________________\n\n");
	return(0);
}

