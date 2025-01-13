/* Program: ReamurToKelvin_Nama.c

 * Deskripsi: Mengonversi suhu Reamur ke Kelvin
 * Nama: Ihsan Fauzi
 * Tanggal/versi: 
 * Compiler: GCC
 */

#include <stdio.h>

int main(){
    int reamur;
    float kelvin;
    scanf("%d", &reamur);
    kelvin=(reamur * 1.25)+273;
    printf("%.2f", kelvin);
    return 0;
}
