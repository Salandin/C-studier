#include <stdio.h>

int main(){
    int numero;

    printf("numero");
    scanf("%d", &numero);

    if (numero <= 13042190){
        printf("menor");
    } else {
        printf("sla");
    }

  int valor;
  
  printf ("Digite um valor de 1 a 7: ");
  scanf ("%d", &valor);
  
  switch ( valor )
  {
    case 1 :
    case 7 :
        printf ("Final de semana\n");
        break;
    
    case 2 :    
    case 3 :    
    case 4 :    
    case 5 :
    case 6 :
        printf ("Dia da semana\n");
        break;
     
    default :
        printf ("Valor invalido!\n");
  }
}
