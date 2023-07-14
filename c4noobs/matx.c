#include <stdio.h>

int main(){
    int matriz[4][4] = {{0},{0},{0},{0}};
    int matrix[4][4];

    for (int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < 4; i++ ){
        for (int j = 0; j < 4; j++ ){
            printf ("%i\t", &matrix [ i ][ j ]);
        }
    }

    printf("%i\t", matriz);
}
