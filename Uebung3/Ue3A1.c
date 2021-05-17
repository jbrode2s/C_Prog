//Aufgabe 1
# include <stdio.h>
# include <math.h>

int main(){
    double k;
	double s = 0.0;

    for (k= 0.0; fabs(3.1415/4 - s) > 1e-5 ; k++){
		if ((int)k%2 != 0)
			s = s - 1/(2*k + 1);

			else s = s + 1/(2*k + 1);

		printf("%i, %lf, %lf\n  ", (int)k, 1/(2*k + 1), s);
	}
    printf("\nZahl n: %i\nFehler: %lf\ns: %lf\n  ", (int)k, 1/(2*k + 1), s);
    return 0;
}
