/*
Nama    : Ihsan Fauzi
Kelas   : 1B-D4
NIM     : 241524048
*/

#include <stdio.h>
#include <math.h>

int main() {
    long harga,jumlah;
    float hasil;
    scanf("%ld %ld", &harga, &jumlah);

    hasil=(float) harga*jumlah;
    if(jumlah % 12==0){
        hasil=(float) hasil*0.85;
    }

    printf("%.2f\n", hasil);

    return 0;
}
