#include <stdio.h>
#include <stdlib.h>

typedef int (*Oper)(int, int);

int add(int a, int b){
    return a+b;
}

int sub(int a, int b){
    return a-b;
}

int main(){
    int (*func)(int,int) = add;

    printf("funcao 1: %d\n", func(1412,214));

    func = sub;

    printf("funcao 2: %d\n", func(1412,214));

    Oper op[2];
    op[0] = add;
    op[1] = sub;

    printf("funcao 1: %d\n", op[0](1412,214));
    printf("funcao 2: %d\n", op[1](1412,214));
}
