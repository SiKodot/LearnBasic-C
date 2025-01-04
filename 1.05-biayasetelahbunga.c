/*Program : BiayaSetelahBunga.c
* Deskripsi : Menentukan Biaya yang harus dibayar
* Nama : Ihsan Fauzi
* tanggal/ versi : 24 oktober 2024
*/

#include<stdio.h>


int main(){
    /* Kamus Data */
    int a;
    float totalBiaya, b;
    
    /* Algoritma */
    scanf("%d",&a);
    scanf("%f",&b);
    totalBiaya=a+(a*b/100);
    printf("%.2f", totalBiaya);
    return 0;
}