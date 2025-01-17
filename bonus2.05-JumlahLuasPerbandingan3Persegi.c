/*
Nama    : Ihsan Fauzi
Kelas   : 1B-D4
*/

#include<stdio.h>

int main(){
    int x,y,z;
    float zz,hasil1,hasil2,hasil3,totalhasil;
    scanf("%d %d %d %f", &x, &y, &z, &zz);
    hasil1=zz*x/x;
    hasil2=zz*y/x;
    hasil3=zz*z/x;
    hasil1=(hasil1)*(hasil1);
    hasil2=(hasil2)*(hasil2);
    hasil3=(hasil3)*(hasil3);
    totalhasil=(float) hasil1+hasil2+hasil3;
    printf("%.2f", totalhasil);
}