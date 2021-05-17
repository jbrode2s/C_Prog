/*
Aufgabe 2
*/

# include <stdio.h>
# include <math.h>

double f1(void);
double f2(void);
double f3(void);
double f4(void);
double f5(void);

int main(){
    int zahl = 1;
    double integ = 0;
    printf("Welches Integral soll berechnet werden(1-5)?");
    scanf("%d",&zahl);

    switch (zahl){

    case 1: integ = f1();
        break;
    case 2: integ = f2();
        break;
    case 3: integ = f3();
        break;
    case 4: integ = f4();
        break;
    default:
        integ = f5();
        }
    printf("%lf\n", integ);
    return 0;
}

double f1(void){
    double a, c, f = 0.0;
    for (a = -M_PI; a <= M_PI; a = a + 0.01){
             c = a + 0.005;
             f = f + ((0.01) * (1/(sqrt(2*M_PI))*pow(M_E, -c*c/(2*M_PI))));
    }
    return f;
    }

double f2(void){
    double a, c, f = 0.0;
    for (a = 0; a <= 0.5; a = a + 0.01){
             c = a + 0.005;
             f = f + ((0.01) * pow(M_E, c)* sin (c));
    }
             return f;
    }

double f3(void){
        double a, c, f = 0.0;
        for (a = -2.0; a <= 1.0; a = a + 0.01){
             c = a + 0.005;
             f = f + 0.01 * fabs(c)* pow(M_E, c);
    }
    return f;
    }

double f4(void){
        double a, c, f = 0.0;
        for (a = 0.0; a <= 1.0; a = a + 0.01){
             c = a + 0.005;
             f = f + 0.01 * 4/(1 + c*c);
        }
        return f;
        }

double f5(void){
        double a, c, f = 0.0;
        for (a = 0.0; a <= 1.0; a = a + 0.01){
             c = a + 0.005;
             f = f + (0.01 * c * (log10(c)*log10(c)));
    }
         return f;
}

