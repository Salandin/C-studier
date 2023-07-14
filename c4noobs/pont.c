#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor = 481;
    int *pont = NULL;

    pont = &valor;
    printf("%p\n", pont);

    printf("%d\n", *pont);

    (*pont)=-9;
    printf("%d ?? %d\n", valor, *pont);

    int *ponteiro;

    ponteiro = (int *)malloc(sizeof(int));
    scanf("%d", ponteiro);
    printf("%d\n", *ponteiro);
}
