#include <stdio.h>
#include <math.h>

int ggT(int, int);
int kgv(int, int);
void addBruch(int*, int*, int*);

int main() {
    int z1[2] = {3, 4};
    int z2[2] = {5, 8};
    int erg[2];
    addBruch(z1,z2,erg);
    printf("%d/%d\n", erg[0], erg[1]);
    return 0;
}

void addBruch(int z1[], int z2[], int erg[]) {
    int k = kgv(z1[1], z2[1]);
    erg[0] = z1[0]*(k/z1[1]) + z2[0] * (k/z2[1]);
    erg[1] = k;
}

int ggT(int a, int b) {
    int g;
    do {
        g = a % b;
        a = b;
        b = g;
    } while(g != 0);
    return a;
}

int kgv(int a, int b) {
    return a * b / ggT(a,b);
}