/*
Nama    : Ihsan Fauzi
Kelas   : 1B-D4
NIM     : 241524048
*/

#include <stdio.h>
#include <math.h>

int main() {
    int jenis, brpkali;

    scanf("%d %d", &jenis,&brpkali);

    switch(jenis){
        case 1:
        if(brpkali<4){
            printf("Serahkan KTP anda !!!");
        }
        else{
            printf("Bayar Denda 10000 !!!");
        }
        break;

        case 2:
        if(brpkali>0){
            printf("Ambil STNK dulu !!!");
        }
        break;

        default:
        scanf("%d", &jenis);
    }
    return 0;
}
