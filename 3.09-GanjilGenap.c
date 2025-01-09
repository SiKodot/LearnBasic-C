/* Program: GanjilGenap_Nama.c
 * Deskripsi: jika bilangan yg di scan ganjil print ganjil dan sebaliknya
 * Nama: Ihsan Fauzi
 * Tanggal/versi: 24 Oktober 2024
 * Compiler: GCC
 */

#include <stdio.h>

int main() {
	/* Kamus data */
	int angka;

	/* Algoritma */
	scanf("%d", &angka);

	if ( angka%2==1 ) {
		printf("ganjil\n");
	} else {
		printf("genap\n");
	}

	return 0;
}
