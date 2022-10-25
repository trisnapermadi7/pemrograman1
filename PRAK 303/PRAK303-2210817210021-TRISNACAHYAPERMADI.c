#include <stdio.h>
int main ()
{
    int N;
    printf ("masukkan nilai N = ");
    scanf ("%i", &N);
    if (N > 0){
        printf ("positif");
    }
    else if (N < 0){
        printf ("negatif");
    }
    else if(N == 0){
        printf ("nol");
    }    
    return 0;
}