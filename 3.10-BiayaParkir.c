/*Program : BiayaParkir.c
* Deskripsi : Menghitung biaya parkir
* Nama : Ihsan Fauzi
* tanggal/ versi : 24 Oktober 2024
*/

#include<stdio.h>


int main(){
    /* Kamus Data */
    int jenisKendaraan;
    int waktu;
    int totalBiaya;
    
    /* Algoritma */
    // input jenis kendaraan
    // input lama parkir (dalam jam)
    scanf("%d %d", &jenisKendaraan,&waktu);
    
    switch(jenisKendaraan){
        case 1 :totalBiaya=2000+(1000*(waktu-1));
        /* isi instruksi jika jenis kendaraan 1 */ 
          break;
        case 2 :totalBiaya=1000+(500*(waktu-1));
        /* isi instruksi jika jenis kendaraan 2 */ 
          break;
    }
    
    printf("%d", totalBiaya);
    
    return 0;
}