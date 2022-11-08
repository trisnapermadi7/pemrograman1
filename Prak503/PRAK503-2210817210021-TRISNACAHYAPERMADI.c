#include <stdio.h>
int maksimal(int a, int b){
    if (a > b){
    return a;
    }
    else{
        return b;
    }
}
int minimal (int a, int b){
    if (b < a){
    return b;
    }
    else{
        return a;
    }
}
int main (void)
{
    int batas = 0;
    int maks = -100000;
    int minim = 100000;
    int bilangan;
    scanf ("%i", &bilangan);
    while (batas < bilangan){
        int nilai;
        scanf ("%i", &nilai);
    maks = maksimal(maks, nilai);
    minim = minimal(minim, nilai);
    batas++;
    }
    printf ("%i %i", maks, minim);
}