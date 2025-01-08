/* Program: WujudBenda_Nama.c
 * Deskripsi: mengetahui wujud benda berdasarkan suhu
 * Nama: Ihsan Fauzi
 * Tanggal/versi: 24 Oktober 2024
 * Compiler: GCC
 */

#include <stdio.h>

int main() {
	/* Kamus data */
	float suhu;

	/* Algoritma */
	scanf("%f", &suhu);

	if ( suhu >=0 && suhu<=100 ) {
		printf("berwujud cair\n");
	} else {
		printf("berwujud non cair\n");
	}

	return 0;
}
