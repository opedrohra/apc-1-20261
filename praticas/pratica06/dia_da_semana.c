#include <stdio.h>

int main(){
    int dia_da_semana;
    printf("Digite um número de 1 a 7 e direi se é um dia útil ou não\n");
    scanf("%i", &dia_da_semana);
    
switch(dia_da_semana){
        case 1: printf("Você selecionou final de semana, domingo\n"); break;
        case 2: printf("Você selecionou um dia útil, segunda\n"); break;
        case 3: printf("Você selecionou um dia útil, terça\n"); break;
        case 4: printf("Você selecionou um dia útil, quarta\n"); break;
        case 5: printf("Você selecionou um dia útil, quinta\n"); break;
        case 6: printf("Você selecionou um dia útil, sexta\n"); break;
        case 7: printf("Você selecionou final de semana, sabado\n"); break;
        default: printf("Número inválido tente novamente.\n");
    
    }
    
    return 0;
}