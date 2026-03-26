#include <stdio.h>
int main() {
char tecla_pressionada;    
printf("Pressione uma tecla: ");

scanf("%c", &tecla_pressionada);    
while(getchar() !='\n');  //Limpa o Buffer/Cache
printf("Voce pressionou a tecla '%c'\n", tecla_pressionada);

int idade;
printf("Informe sua idade: ");
scanf("%i", &idade);
while(getchar() !='\n');
printf("Você tem %i anos\n",idade);
    
float preco;
printf("Informe o preço da gasolina: ");
scanf("%f", &preco);
printf("O preco da gasolina eh %.2f\n",preco);
    return 0;

}