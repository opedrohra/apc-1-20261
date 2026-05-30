#include <stdio.h>
 int main (){
 int numero = 0;
 printf("Entre com um número de 1 a 10:");
 scanf("%i", &numero);

//repete contando de 1 ate 10
for(int i=1; i<=10; i++){
printf("%i x %i =%i\n",numero, i, numero * i);

}
//repete contando de 10 ate 1
for(int i=10; i>0; i--){
printf("%i x %i =%i\n",numero, i, numero * i);
 }
printf("\n");

    return 0;
}