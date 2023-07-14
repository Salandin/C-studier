#include <stdio.h>

int main() {
    int resp;

    do{
        printf("1 ou 2?");
        scanf("%d",resp);
    } while (resp==2);

    return 0;
}
