/* Program: Limas_Nama.c
 * Deskripsi: Menghitung volume limas
 * Nama: Ihsan Fauzi
 * Tanggal/versi: 24 Oktober 2024
 * Compiler: GCC
 */

#include <stdio.h>

int main() {
	/* Kamus data */
	float volume;
	float panjang, lebar, tinggi;

	/* Algoritma */
	scanf("%f %f %f",&panjang,&lebar,&tinggi);
	
	volume=panjang*lebar*tinggi/3;


	printf("%f\n", volume);
	return 0;
}