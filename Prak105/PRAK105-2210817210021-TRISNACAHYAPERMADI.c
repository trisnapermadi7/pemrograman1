#include <stdio.h>
int main ()
{
    int a=9, b=5, x=8, y=8, sisa;
    printf ("\tvariabel a: %d\n",a);
    printf ("\tvariabel b: %d\n",b);
    printf ("\tvariabel x: %d\n",x);
    printf ("\tvariabel y: %d\n",x);
    sisa = (a%b)+(x%y);
    printf ("\tTotal sisa bagi dari a dibagi b dan x dibagi y adalah: %d", sisa);
    return 0;
}