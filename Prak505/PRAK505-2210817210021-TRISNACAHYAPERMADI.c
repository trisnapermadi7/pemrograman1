#include <stdio.h>
void Biodata(int tahunLahir, char Namaku[20], char Asal[15]){
    int tahun_sekarang = 2020;
    printf ("Perkenakan Nama Saya : %s\n", Namaku);
    printf ("Umur Saya : %i\n", tahun_sekarang - tahunLahir);
    printf ("Saya Adalah Angkatan :%i\n", tahun_sekarang);
    printf ("Asal Saya Dari : %s", Asal); 
}
int main ()
{
    int tahunLahir;
    char Namaku[20], Asal[15];
    scanf ("%i", &tahunLahir);
    scanf(" %[^\n]", &Namaku);
    scanf(" %[^\n]", &Asal);
    Biodata(tahunLahir, Namaku, Asal);
    return 0;
}