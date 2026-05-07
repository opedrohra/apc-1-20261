#include <stdio.h>

int main () {
    int idade = 0;

    printf("Informe a sua idade:");
    scanf("%i", &idade);

    int eh_menor_de_16_anos = idade < 16;
    int eh_menor_de_18_anos = idade < 18;
    int eh_menor_de_70_anos = idade < 70;
//if (eh_maior_de_16_anos){
  //      printf("Com %i anos voce pode votar\n", idade);
    //} else {
      //  printf("Com %i anos voce NAO pode votar\n", idade);
    //}
    int eh_maior_de_18_anos = idade >= 18;
    if(eh_maior_de_18_anos && eh_menor_de_70_anos){
        printf("Com %i anos voce e obrigado a votar\n", idade);
        } 
        else if (eh_menor_de_18_anos){
            printf("Com %i anos voce NAO pode votar\n", idade); }
        else if (eh_menor_de_70_anos){
            printf("Com %i anos voce TEM que votar\n", idade);
            
            }
       else{
            printf("Com %i anos voce pode votar\n", idade);
            }
 
    
    
    
    
    
    //int eh_menor_de_16_anos = !eh_maior_de_16_anos;
    //if (eh_menor_de_16_anos){
    //    printf("Com %i anos voce NAO pode votar\n", idade);
    //}        
    
    return 0;
}