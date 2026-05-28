#include <stdio.h>
#include <string.h>

int main(){
char texto[11]; //quantidade de caracte//Sabor string
texto[0] = 'O';
texto[1] = 'l';
texto[2] = 'a';
texto[3] = ' ';
texto[4] = 'p';
texto[5] = 'e';
texto[6] = 's';
texto[7] = 's';
texto[8] = 'o';
texto[9] = 'a';
texto[10] = 'l';

//naum pode
// texto = "Bom dia";
//texto = "bom"+"dia";
//copiar a string
strcpy(texto, "bom"); //texto = "bom"
printf("%s", texto);

printf("%s\n", texto);
    
    for(int i=0; i<11; i++){
printf("%c", texto[i]);
   }
printf("\n");

 //concatenar
 strcat(texto," dia"); //texto = texto + "dia"
printf("%s\n", texto); 
 
   
   //tamanho da string
int tamanho = strlen(texto);
printf("O texto '%s' tem %i caracteres\n",texto, tamanho);
   
   int capacidade = sizeof(texto);
   printf("O texto guarda ate %i caracteres\n", capacidade);
   //Preencher a string com um caracter
   memset(texto, 'a',8);
  //limpa a string
   printf("%s\n", texto);
   memset(texto,'\0', capacidade);
   printf("%s\n", texto);
   //string>outra, string=outra
   
   int compara = strcmp("banana", "laranja"); //<0 ordem eh antes
   printf("banana com laranja = %i\n", compara); 
   
   compara = strcmp("laranja", "banana"); //>0 ordem eh depois
   printf("laranja com banana = %i\n", compara); 
   
   compara = strcmp("banana", "banana");//sao iguais
   printf("banana com banana = %i\n", compara); 
   
   compara = strcmp("banana", "BANANA");//maior que zero pq o maiusculo na frente do minusculo
   printf("banana com BANANA = %i\n", compara); 
    char *tem_letra_a= strchr("sergipe", 'a');

    printf("sergipe tem a letra 'a'? %s\n", tem_letra_a);
    tem_letra_a= strchr("roraima", 'a');

    printf("Roraima tem a letra 'a'? %s\n", tem_letra_a);
    //procurar uma string na string
    char *tem_silva = strstr ("joao da silva neto","silva");
    printf("joao da silva neto tem 'silva'%s\n", tem_silva);
    tem_silva = strstr ("jose de sousa","silva");
    printf("jose de sousa tem 'silva'%s\n", tem_silva);

   

   

  
  
  
  
  
   return 0;


}
