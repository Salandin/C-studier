#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int *nums = (int *) malloc(5*sizeof(int));
    if (nums == NULL){
        printf("Alocacao mal sucedida!");
        exit(1);
    } 
    printf("%d\n",*nums);
    free(nums);

    int *p = (int *) calloc(1,sizeof(int));
    if(p == NULL){
        printf("Alocacao mal sucedida!");
        exit(1);
    }
    printf("%d\n",*p);
    free(p);
}
