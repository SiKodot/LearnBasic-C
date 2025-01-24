/*
Nama    : Ihsan Fauzi
Kelas   : 1B-D4
*/

#include <stdio.h>

int main() {
    int ambil;         
    float saldo;     
    scanf("%d %f", &ambil, &saldo);

    if (ambil % 5 == 0 && saldo >= ambil + 0.5) {
        saldo = saldo - ambil - 0.5;
    }

    printf("%.2f\n", saldo);

    return 0;
}
