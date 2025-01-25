/*
Nama    : Ihsan Fauzi
Kelas   : 1B-D4
*/

#include <stdio.h>

int main() {
    float harga,hasil;
    int tanggal;
    scanf("%f %d", &harga, &tanggal);

    if (harga>=50000){
        hasil = tanggal *0.02* harga;
        hasil=harga-hasil;
    }
    printf("%.2f",hasil);
    return 0;
}