#include <stdio.h>
int reverse (int A){
    int reverse = 0;
    while (A!=0){
        reverse = reverse * 10;
        reverse = reverse + A%10;
        A = A/10;
    }
     return reverse; 
}
int main (){
    int A, B;
    scanf ("%i %i", &A, &B);
    A = reverse (A);
    B = reverse (B);
    int C = A + B;
    printf ("%i", reverse(C));
}
