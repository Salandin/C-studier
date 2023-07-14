#include <stdio.h>

int main(){
    char vetor[100];
    printf("%s\n", "oi, bom ponto de interrogacao");

    printf("mas %s\a\n", "nao acha que");

    printf("Tabela: \n linha um:\n\t %s  \n\t %s", "eu menti","nao tem tabela");
    
    scanf("%[^\n]", vetor);
    printf("%s",vetor);
}
