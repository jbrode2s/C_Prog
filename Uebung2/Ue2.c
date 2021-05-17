/* Hochschule Bonn-Rhein-Sieg
FB Informatik
Programmierung in C - SoSe 2014
Übung 2: Gültigkeitsbereiche, komplexe Datentypen
Aufgabe 1
*/

# include <stdio.h>
# include <string.h>

void eingabe();
int ausgabe();
int lesen();
void which_row(char *text);


struct messung {
	float	temp;
	float	spannung;
	float	strom;
	float	druck;
};

struct datum{
	int	tag;
	int	monat;
	int	jahr;
};
struct messung_code_zeit {
	char code[2];
	struct	datum	date;
	struct	messung messwert;
} messwert_code_zeit;


int main(){
	char start = 0, end = 0;
	while (!end){
		fflush(stdin);
		printf("Eingabe starten(y/n)?");
		if (scanf("%c", &start) == 1 && (start == 'y' || start == 'Y')){
	eingabe();
	ausgabe();
//  lesen();
	end = 0;
		}
		else
		end = 1;}
		 fflush(stdin);
		     FILE *datei;
    char text[800+1];
    datei = fopen ("messwerte.txt", "r");
    printf("\n'messwerte.txt' einlesen(y/n)?\n");
    if (scanf("%c", &start) == 1 && (start == 'y' || start == 'Y')){

        if (datei != NULL)
            {
    fscanf (datei, "%800c", text);
    text[800] = '\0';
    printf ("%s\n", text);
            }
          }
          else
            return 0;
    which_row(text);
return 0;
}

void eingabe(){
	printf("Systemkennung:");
	scanf("%2s",&messwert_code_zeit.code);
	printf("Jahr:");
	scanf("%d",&messwert_code_zeit.date.jahr);
	printf("Monat:");
	scanf("%d",&messwert_code_zeit.date.monat);
	printf("Tag:");
	scanf("%d",&messwert_code_zeit.date.tag);
	printf("Temperatur:");
	scanf("%f",&messwert_code_zeit.messwert.temp);
	printf("Spannung:");
	scanf("%f",&messwert_code_zeit.messwert.spannung);
	printf("Strom:");
	scanf("%f",&messwert_code_zeit.messwert.strom);
	printf("Druck:");
	scanf("%f",&messwert_code_zeit.messwert.druck);
	printf("\n");
}

int ausgabe(){

	FILE *datei;
	 static int run = 0;
    ++run;
	datei = fopen ("messwerte.txt", "r");
	if (datei != NULL)
        ++run;
            datei = fopen ("messwerte.txt", "a");
			if (datei == NULL){
    printf("ERROR! 'messwerte.txt' kann nicht geöffnet werden.");
    return 1;
	}

	if (run ==1){
	fprintf(datei,"System\tDatum\t\tTemperatur\tSpannung\tStrom\t\tDruck");
	fprintf(datei,"\n=============================================================================\n");
	}
	fprintf (datei, "%2s\t\t%d.%d.%d\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\t\t\n" , messwert_code_zeit.code, messwert_code_zeit.date.jahr, messwert_code_zeit.date.monat,
			messwert_code_zeit.date.tag, messwert_code_zeit.messwert.temp, messwert_code_zeit.messwert.spannung, messwert_code_zeit.messwert.strom, messwert_code_zeit.messwert.druck);
    fclose (datei);
  return 0;
}


 int lesen ()
    {
      FILE *datei;
      char text[2000+1];
	  datei = fopen ("messwerte.txt", "r");
	        if (datei != NULL)
				{
				fscanf (datei, "%2000c", text);
          text[2000] = '\0';
        printf ("%s\n", text);
        fclose (datei);
			}
    return 0;
}

void which_row(char *text)
{
    int i, row, k;
    int j = -1;

    printf("Welche Zeile soll ausgegeben werden?");
    scanf("%d", &row);
    printf("row: %i\n", row);
    for (i = 0; i <= 800; i++)
    {
        if (text[i] =='\n')
            {
            ++j;
           if (j == row)
            {
                    printf("j ist: %d\n", j);
                    printf("i ist: %d\n", i);
                    for (k = i; text[k+1]!='\n' ; ++k){
                       printf("%c", text[k]);}
                        break;
           }
            }
                        continue;
    }
}
