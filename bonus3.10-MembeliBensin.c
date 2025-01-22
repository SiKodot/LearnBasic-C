/*
Nama    : Ihsan Fauzi
Kelas   : 1B-D4
NIM     : 241524048
*/

#include <stdio.h>
#include <math.h>

int main() {
    int jenis;
    float jumlah,hasil;

    scanf("%d %f", &jenis,&jumlah);

    switch(jenis){
        case 1:
        hasil=(float)jumlah*9000;
        break;

        case 2:
        hasil=(float)jumlah*7600;
        break;

        default:
        scanf("%d", &jenis);
    }

    printf("%.2f\n", hasil);
}
