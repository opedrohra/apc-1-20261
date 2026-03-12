#include <stdio.h>//biblioteca de comandos na linguagem C
int main (){

    printf("Estou usando a funcao printf()\n");
    
    printf("Programar em C eh top\n");

    //printf(10); da errado
    // printf("%i\n", 10);
    printf("%i\n", 10+10);
    printf("%011i\n", 10+10);
    printf("%11i\n", 10+10);
    printf("%f\n", 3.1415);
    printf("%.2f\n", 3.1415); // 4 pode ser qualquer numero que voce quiser que seja mostrado
    printf("%s", "isso eh uma string\n");
    
   return 0;
}