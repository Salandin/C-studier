#include <stdio.h>
#include <stdlib.h>

typedef struct{
    float dist;
    float massa;
    float carga;
    float momento;
} black_holes;

int main(){
    black_holes bh1, bh2;

    bh1.dist = 31.1;
    bh1.massa = 149.1;
    bh1.carga = 2.28;
    bh1.momento = 1.94;

    bh2.dist = 31.1;
    bh2.massa = 12.5289;
    bh2.carga = 1.842;
    bh2.momento = 0.09;

    printf("Black hole 1:: \t\n distnacia: %f anos-luz,\t\n massas: %f massas solares,\t\n carga: %f, \t\n momento angular: %f", bh1.dist, bh1.massa, bh1.carga, bh1.momento);

    printf("\n\nBlack hole 2:: \t\n distnacia: %f anos-luz,\t\n massas: %f massas solares,\t\n carga: %f, \t\n momento angular: %f", bh2.dist, bh2.massa, bh2.carga, bh2.momento);

}
