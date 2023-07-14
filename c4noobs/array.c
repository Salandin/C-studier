#include <stdio.h>

int main(){
    int vetor_nulo[3]={0};
    float vetor_ijk[]={1.943534,4.32256266,9.999999999999};
    float some=0;

    for(int i=0;i<3;i++){
        printf("- %f.\t\n", vetor_ijk[i]);
        some += vetor_ijk[i];
    }
    printf("%f\n", some);

    float media = some/3;
    printf("%f\n", media);
}
