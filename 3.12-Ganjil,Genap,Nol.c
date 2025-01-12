/* Program: GanjilGenapNol_Nama.c
 * Deskripsi: program menunjukkan bilangan ganjil atau genap
 * Nama: Ihsan Fauzi
 * Tanggal/versi: 28 okt 2024
 * Compiler: GCC
 */

#include <stdio.h>

int main() {
	/* Kamus data 
	bilangan: variabel bertipe integer
	*/
	
	int bilangan;
	scanf("%d", &bilangan);
	if (bilangan%2==0 && bilangan!=0){
	    printf("genap");
	}
	else if (bilangan%2==1){
	    printf("ganjil");
	}
	else {
	    printf("nol");
	}
	

	/* Algoritma */


	return 0;
}
