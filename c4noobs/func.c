#include <stdio.h>

void retorna(int x){
    printf("%d\n", x);
}

int continha(int a, int b){
    return (((a*b)*(a/b))+125)*(((a/b)*a*b*3)-34);
}

int main(void){
    int a = 131;
    int b = 9;
    int c = continha(a,b);
    
    retorna(c);
}
