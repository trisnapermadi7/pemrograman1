#include <stdio.h>
int main (void)
{
    int a, i;
    scanf ("%i", &a);
    for (i= 1; i <= a; i++){
        if (i % 2 != 0){
            printf ("%i ", i);
        }
        else {}
    }
    printf ("\n");
    for (i= a; i>=1; i--){
        if (i % 2 == 0){
            printf ("%i ", i);
        }
        else {}
    }
}


