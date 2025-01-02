/*
Deskripsi   = mengurutkan bilangan x sampai y
Penjelesan  = mengurutkan bilangan x sampai y dan selalu new line tetapi diakhir tidak boleh new line
Author      = Ihsan Fauzi
Tanggal     = 21 Oktober 2024
*/

#include<stdio.h>
int main (){
    int x,y;
    scanf("%d %d",&x,&y);
    while(x<=y){
        printf ("%d\n",x);
        x++;
    }
    return 0;
}
//Tulis main program disini