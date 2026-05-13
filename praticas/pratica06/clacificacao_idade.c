#include <stdio.h>

int main(){
int idade;
printf("Digite sua idade:\n");
scanf("%i", &idade);
if(idade <= 12){
    printf("Você é crianca\n");
}
else if(idade >=13 && idade <= 17){
    printf("voce é adolescente\n");
}
else if(idade >= 18 && idade <= 60){
    printf("Voce é um adulto\n");
}
    else {
        printf("Voce é um idoso\n");
    }
    return 0;
}