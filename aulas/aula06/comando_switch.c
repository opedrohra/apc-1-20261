#include <stdio.h>

int main(){

int nota = 0;

printf("informe uma nota de 1 a 5:\n");
scanf("%i", &nota);
// if(nota == 1){
//     printf("voce ganhou uma estrela *\n");
// }
// else if (nota == 2){
// printf("Voce ganhou 2 estrelas **\n");
// }
// else if (nota == 3){
// printf("Voce ganhou 3 estrelas ***\n");
// }

// else if (nota == 4){
// printf("Voce ganhou 4 estrelas ****\n");
// }
// else if (nota == 5){
// printf("Voce ganhou 5 estrelas *****\n");
// }  
// else{
//     printf("Nota invalida tente novamente.\n");
// }
    
    switch(nota){
        case 1: printf("voce ganhou uma estrela *\n"); break;
        case 2: printf("Voce ganhou 2 estrelas **\n"); break;
        case 3: printf("Voce ganhou 3 estrelas ***\n"); break;
        case 4: printf("Voce ganhou 4 estrelas ****\n"); break;
        case 5: printf("Voce ganhou 5 estrelas *****\n"); break;
        default: printf("Nota invalida tente novamente.\n");
    
    }
    
    
    
    
    
    
    
    
      return 0;
}