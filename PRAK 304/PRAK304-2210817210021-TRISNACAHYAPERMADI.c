#include <stdio.h>
int main (){
    int x;
    printf  ("Sebuah baris berisi satu buah bilangan cacah dan batas maksimal 99. ( a >= 0 < 100 )\n");
    printf ("Sebuah baris berisi sebuah bilangan cacah yang merupakan Ejaan dari bilangan tersebut atau\n");
    printf ("masukkan angka= ");
    scanf ("%i", &x);
    if(x == 0){
        printf("Nol");
    }
    else if(x > 0 && x < 10){
        printf("Satuan");
    }
    else if(x >= 10 && x < 20){
        printf ("Belasan");
    }
    else if(x >= 20 && x <= 99){
        printf("Puluhan");
    }else {
        printf ("Anda menginput melebihi Limit Bilangan");
    }
    return 0;
}