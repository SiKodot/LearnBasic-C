/*
Nama    : Ihsan Fauzi
Kelas   : 1B-D4
NIM     : 241524048
*/

#include <stdio.h>
#include <math.h>

int main() {
    long bil[2];
    for (int i = 0; i < 2; i++) {
        scanf("%ld", &bil[i]);
    }

    if (bil[0] > bil[1]) {
        printf("%ld", bil[1]);
    } else {
        printf("%ld", bil[0]);
    }

    return 0;
}
