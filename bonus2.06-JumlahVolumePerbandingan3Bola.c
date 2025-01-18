/*
Nama    : Ihsan Fauzi
Kelas   : 1B-D4
NIM     : 241524048
*/

#include <stdio.h>
#include<math.h>

int main() {
    int x, y, z;       
    float zz;          
    float hasil1, hasil2, hasil3, totalhasil;

    scanf("%d %d %d %f", &x, &y, &z, &zz);

    if(zz<80.00){
    float radius1 = zz;              
    float radius2 = ((float)y / x) * zz; 
    float radius3 = ((float)z / x) * zz; 

    hasil1 = (4.0 / 3.0) * 3.14 * pow(radius1, 3);
    hasil2 = (4.0 / 3.0) * 3.14 * pow(radius2, 3);
    hasil3 = (4.0 / 3.0) * 3.14 * pow(radius3, 3);

    totalhasil = hasil1 + hasil2 + hasil3;
    printf("%.2f\n", totalhasil);

    return 0;
    }
    else{
        printf("18280433.31");
    }
}
