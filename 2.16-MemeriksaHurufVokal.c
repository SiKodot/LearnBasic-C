/* Program: Validasi_Vokal_Saiful.c
 * Deskripsi: Memeriksa apakah suatu karakter merupakan huruf vokal atau bukan
 * Nama:Ihsan Fauzi
 * Tanggal/versi: 30/10/2024
 */

#include<stdio.h>

int main(){
    char x;
    scanf ("%c", &x);
        if (x=='a'||x=='i'||x=='u'||x=='e'||x=='o'||x=='A'||x=='I'||x=='U'||x=='E'||x=='O'){
            printf ("true");
        }
        else{
            printf ("false");
            
        }
    }
  