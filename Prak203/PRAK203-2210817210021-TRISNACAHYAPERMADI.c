#include <stdio.h>
int main ()
{
    float a, b, i, j, x, y, hasil;
    printf ("a: ");
    scanf ("%f", &a);
    printf ("b: ");
    scanf ("%f", &b);
    printf ("i: ");
    scanf ("%f", &i);
    printf ("j: ");
    scanf ("%f", &j);
    printf ("x: ");
    scanf ("%f", &x);
    printf ("y: ");
    scanf ("%f", &y);
    hasil= (a-b)*(i/j)-(x+y);
    printf ("hasil dari a dikurang b dikali dengan i dibagi j dikurang dengan x ditambah y adalah %.3f", hasil);
    return 0;
}