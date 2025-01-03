/*Program : CelciusToFahrenheit.c
* Deskripsi : Mengonversi suhu dalam celcius ke fahrenheit
* Nama : Ihsan Fauzi
* tanggal/ versi : 21 Oktober 2024
* Catatan: °F = °C × 1,8 + 32
*/

#include<stdio.h>
#include<math.h>

int main(){
    /* Kamus Data */
    float fahrenheit, celcius;
    
    /* Algoritma */
    scanf("%f", &celcius);
    fahrenheit=celcius*1.8+32;
    printf("%.2f", fahrenheit);
    return 0;
}