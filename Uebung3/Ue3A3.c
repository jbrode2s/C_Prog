/*
Aufgabe 3
*/

/*******************************************************************/
#include <stdio.h>
#include <math.h>

/*******************************************************************/
int main(void)
{
	char flag=0, ende=0;
	float a11 = 0, a12 = 0,
	a21 = 0, a22 = 0,
	b1  = 0, b2  = 0,
	x1  = 0, x2  = 0;
	float detA,	detB1, detB2;

	printf("\n");
	printf("Berechnung eines linearen Gleichungssystems 2ter Ordnung:\n");
	printf("_________________________________________________________\n");

	while(!ende) {
		/* Eingabeaufforderung */
		/***********************/
		printf("\n");
		printf("Eingabe starten [y|n]?");
		if(scanf("%c",&flag) == 1 && (flag == 'y' || flag == 'Y')){
			printf("Bitte Matrix A eingeben:\n");
			if((printf("a11=")== 0 || scanf("%f",&a11)!=1)
				|| (printf("a12=")== 0 || scanf("%f",&a12)!=1)
				|| (printf("a21=")== 0 || scanf("%f",&a21)!=1)
				|| (printf("a22=")== 0 || scanf("%f",&a22)!=1)){
				printf("Eingabefehler!\n");
				//				while(getchar()!='\n'); // clean input-stream
				//		    		continue;
			}	

			printf("Bitte Vektor b eingeben:\n");
			if((printf("b1=")== 0 ||  scanf("%f",&b1)!=1)
				|| (printf("b2=")== 0 || scanf("%f",&b2)!=1)){
				printf("Eingabefehler!\n");
				//		        while(getchar()!='\n'); // clean input-stream
				//			        continue;
			} while(getchar()!='\n'); // clean input-stream
			
			/* Loesung berechnen */
			/*********************/  
			// Determinanten:
			detA  = a11*a22 - a21*a12;
			detB1 = b1 *a22 - b2 *a12;
			detB2 = a11* b2 - a21* b1;

			printf("\n");
			printf("Loesung:\n");
			

			// Fallunterscheidung
			// Abfrage == 0 sollte hier auch mit float ok sein
			if(detA == 0 && (detB1!=0 || detB2!=0)){
				printf("keine Loesungen\n");
			} else if(detA==0) {
				printf("unendlich viele Loesungen\n");
			}else // eindeutige Loesung {
				x1 = detB1/detA;
				x2 = detB2/detA;
				
				printf("(%10g %10g)   (%10g)   (%10g)\n",a11,a12,x1,b1);
				printf("(%10s %10s) * (%10s) = (%10s)\n","" ,"" ,"","");
				printf("(%10g %10g)   (%10g)   (%10g)\n",a21,a22,x2,b2);
			}
			printf("\n");
			printf("_________________________________________________________\n");
		} else {
			ende=1;
		}
	}
	return(0);
} 

