#include <stdio.h>
int main(){
int opcao = 0;

printf("1 - Novo jogo\n");
printf("2 - continuar jogo\n");
printf("3 - ver pontuaçãon\n");
printf("4 - sair\n");
scanf("%i", &opcao);
if(opcao == 1){
    printf("Vamos iniciar o jogo!\n");


} else if(opcao == 2){
printf("Muito bom ver você novamente! Vamos voltar ao jogo.\n");
}
else if(opcao == 3){
    printf("Sua pontução é de 2572 pontos\n");
}
else if (opcao == 4){
    printf("Fechando o jogo...\n");
}else{  printf("Opção invalida\n");
}

    return 0;
}