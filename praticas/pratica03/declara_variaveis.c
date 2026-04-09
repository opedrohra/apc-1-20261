#include <stdio.h>
int main(){
char sexo;
float altura_em_metros;
float peso;
    printf("Escreva seu gênero com uma letra:\n");
    
    scanf("%c", &sexo);
    printf("%s %c\n", "Seu sexo é", sexo);
    printf("Agora digite sua altura em metros:\n");
    scanf("%f", &altura_em_metros);
    printf("%s %.2f\n","Sua altura é:", altura_em_metros);
    printf("Digite seu peso:");
    scanf("%f", &peso);
    printf("%s %.3f\n", "Seu peso é de:", peso);



    
    
    
    
    return 0;
}
