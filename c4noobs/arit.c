#include <stdio.h>

int main(){
    int var1=9246, var2=612, var3=34, var4=54;

    int sum = var1+var4;
    int sub = var3-var2-var4-var1;
    int mult = var4*var3*var2*var1;
    int div = var4/var2;
    int modl = var1%var3;

    printf("soma: %i\n subtracao: %i\n multiplicacao:%i\n divisao:%i\n modulo:%i\n", sum, sub, mult, div, modl);

}
