/* 
Deskripsi : mengurutkan bilangan dari x sampai y, setiap bilangan dipisahkan oleh spasi
Nama /Author : Ihsan Fauzi
Tanggal/versi : 21 Oktober 2024
*/

#include<stdio.h>

int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    while(x<=y){
        printf("%d ",x);
        x++;
    }
    
    return 0;
}

