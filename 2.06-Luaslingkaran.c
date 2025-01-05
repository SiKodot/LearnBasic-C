/*Program : LuasLingkaran.c
* Deskripsi : Menghitung Luas Lingkaran dari Jari-Jarinya
* Nama : Ihsan Fauzi
* tanggal/ versi : 24 Oktober 2024
*/

#include<stdio.h>
#include<math.h>

int main(){
    /* Kamus Data */
    float luas; // variable luas lingkaran
    float r;    // variable jari-jari lingkaran
    
    /* Algoritma */
    
    scanf("%f", &r);
    luas=(r*r)*3.14;
    
    
    
    printf("%.2f", luas);
    return 0;
}