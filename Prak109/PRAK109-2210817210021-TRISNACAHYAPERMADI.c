#include <stdio.h>
int main ()
{
    int jumlah_pasukan_yang_dibawa_yu_zhong, jumlah_pahlawan;
    jumlah_pasukan_yang_dibawa_yu_zhong= 958370;
    jumlah_pahlawan= 5;
    printf ("jumlah pasukan yang dibawa Yu Zhong = %d\n", jumlah_pasukan_yang_dibawa_yu_zhong);
    printf ("jumlah pahlawan = %d", jumlah_pahlawan);
    printf ("\njumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d", jumlah_pasukan_yang_dibawa_yu_zhong/jumlah_pahlawan);
    return 0;
}