#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    if(argc != 2){
        printf("ERRO, numero invalido!!");
        return -1;
    }

    int size = atoi(argv[1]);

    int *arr = (int *) malloc(size * sizeof(int));
    for(int i = 0; i<size;i++)
        arr[i]=i;

    for(int i=0; i<size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
