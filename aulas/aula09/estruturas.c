#include <stdio.h>
int main(){

//cria o tipo contato


struct contato_t{
    char nome[61];
    long long int telefone;
};
//cria o tipo ponto_cartesiano
struct produto_cartesiano_t{
    int x;
    int y;
};
//cria o tipo aluno
struct aluno_t{
    int matricula;
    char nome[61];
    char email[101];
    char nascimento[11];
};

//cria uma variavel do tipo contato
struct contato_t contato;
printf("Entre com o nome do contato:\n ");
scanf("%[^\n]s", contato.nome);
while(getchar() !='\n');
printf("Entre com o telefone do contato:\n ");
scanf("%lli",&contato.telefone);
while(getchar() !='\n');
printf("Seu contato: %s - %lli\n ",contato.nome, contato.telefone);
//cria um vetor do tipo contato
struct contato_t contatos[10];
int quantidade = 0;
//incluir o contato
printf("Entre com o nome do contato:\n ");
scanf("%[^\n]s", contatos[quantidade].nome);
while(getchar() !='\n');
printf("Entre com o telefone do contato:\n ");
scanf("%lli",&contatos[quantidade].telefone);
while(getchar() !='\n');
   quantidade++;
//listar os contatos
for(int i=0; i<quantidade; i++){
printf("Contato %i : %s - %lli\n", i+1,
    contatos[i].nome, contatos[i].telefone);
}

//procurar um contato
int achei = -1;
int procurado = 0;
printf("Entre com a numero de contato: ");
scanf("%i", &procurado);
while(getchar() !='\n');
for(int i=0;i<quantidade; i++){
    if(procurado==i){
        achei = i;
        break;

    }
}

if(achei<0){
printf("Não achei o contato %i\n", procurado);

}else{
    printf("Achei o contato %i:%s - %lli\n",procurado, contatos[procurado].nome, contatos[procurado].telefone);
}


//alterar 
  achei = -1;
 procurado = 0;
printf("Entre com a numero de contato: ");
scanf("%i", &procurado);
while(getchar() !='\n');
for(int i=0;i<quantidade; i++){
    if(procurado==i){
        achei = i;
        break;

    }
}

if(achei<0){
printf("Não achei o contato %i\n", procurado);

}else{
    printf("Entre com o nome do novo contato:\n ");
scanf("%[^\n]s", contatos[procurado].nome);
while(getchar() !='\n');
printf("Entre com o telefone do novo contato:\n ");
scanf("%lli",&contatos[procurado].telefone);
while(getchar() !='\n');
}
 
 
 
    //apagar contato
    achei = -1;
    procurado = 0;
printf("Entre com a numero de contato: ");
scanf("%i", &procurado);
while(getchar() !='\n');
for(int i=0;i<quantidade; i++){
    if(procurado==i){
        achei = i;
        break;

    }
}
if (achei<0){
    printf("Não achei o contato %i\n", procurado);
}else{
    contatos[procurado] = contatos[quantidade-1];
    quantidade--;

}

    
    
    return 0;
}
