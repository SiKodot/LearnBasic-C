/*
Nama    : Ihsan Fauzi
Kelas   : 1B-D4
*/

#include <stdio.h>
#include <math.h>

int main() {
    long bil;
    float kapasitas,hasil;
    scanf("%ld", &bil);
    scanf("%f", &kapasitas);

    hasil=(float) bil/7600;
    printf("%.2f\n", hasil);

    if (hasil>kapasitas){
        printf("Bensin Berlebih");
    }

    return 0;
}
