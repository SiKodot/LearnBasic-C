/* Program: Validasi_ParkirMalamMinggu_Saiful.c
 * Deskripsi: Menghitung biaya parkir khusus di malam Minggu
 * Nama: Ihsan Fauzi
 * Tanggal/versi: 28/10/2024
 */
#include<stdio.h>
int main(){
int jenisKendaraan;
int waktu;
int totalBiaya;
scanf("%d %d",&jenisKendaraan,&waktu);
switch(jenisKendaraan){
	case 1 : if (waktu<=5&&waktu>0){
		totalBiaya=1500*waktu;
		printf("%d", totalBiaya);
		}
			else if (waktu>5&&waktu<=8){
		totalBiaya=(1500*5)+2000*(waktu-5);
		printf("%d", totalBiaya);
		}
				else{
		printf("disegel\n");
		}
		break;
	case 2: if (waktu<=5&&waktu>0){
		totalBiaya=1000*waktu;
		printf("%d", totalBiaya);
		}
		else if (waktu>5&&waktu<=8){
		totalBiaya=(1000*5)+1500*(waktu-5);
		printf("%d", totalBiaya);
	}
		else {
		printf("disegel");
	}
		break;
	}
		
	return 0;
}