#include <stdio.h>

int main (){
    int numero = 0;


printf ("Digite o numero e direi se é par ou impar:");
scanf("%i", &numero);
if(numero %2 == 0){
    printf("Seu numero %i é par\n", numero);
}
else{
    printf("Seu numero %i nao e par\n", numero);
}

    
    
    return 0;
}