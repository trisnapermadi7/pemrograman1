#include <stdio.h>
int Maxbilangan (int a, int b, int c, int d){
    if (a > b && a > c && a > d){
    return a;
    }
    else if (b > a && b > c && b > d){
    return b;
    }
    else if (c > a && c > b && c > d){
    return c;
    }
    else {
    return d;
    }
}
int main (void)
{
    int a, b, c, d;
    scanf ("%i %i %i %i", &a, &b, &c, &d);
    int hasil = Maxbilangan(a, b, c, d);
    printf ("%i", hasil);
    return 0;
}