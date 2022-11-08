#include <stdio.h>
#include <math.h>
int hitung (int nilai1, int nilai2){
    return nilai1 - nilai2;
}
int mutlak (int angka){
    return abs(angka);
}
int main (void)
{
    int a, b, c, d, Hasil;
    scanf("%i",&a);
    scanf("%i",&c);
    scanf("%i",&b);
    scanf("%i",&d);
    Hasil = hitung(a,b) + hitung(c,d);
    printf("%i",mutlak(Hasil));
    return 0;
}