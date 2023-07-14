#include <stdio.h>

int global=12;

int main(){
    int a,b,c,contador;
    float preco;
    double cambio;
    char letra;
    char nome[10];
    double doub1,
           doub2,
           doub3,
           doubf;
    

    int local=43;
    
    int funcao(int local){
        printf("%d\n", local);
        printf("%d\n", global);
    }

    funcao(local);

    a = 3;
    b = a*125;
    c = a + b + (18*39);

    printf("%i\n",a);
    printf("%i\n",b);
    printf("%i\n",c);
}
