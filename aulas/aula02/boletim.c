#include <stdio.h>
int main(){
    char tecla_pressionada;
    int numero_inteiro;
    float numero_com_seis_casas;
    double numero_com_doze_casas;
    
    tecla_pressionada = 'A';
    numero_inteiro = 10;
    numero_com_seis_casas = 0.123456f;
    numero_com_doze_casas = 0.123456;

    float nota_mat = 5.6f;
    float nota_port = 5.0f;
    float nota_ingles = 0.0f;
    float media = 5.2f;

    printf("--------BOLETIM------\n");
    printf("Materia-------------Nota\n");
    printf("Matemática         %5.1f\n", nota_mat);
    printf("Português          %5.1f\n", nota_port);
    printf("Inglês             %5.1f\n", nota_ingles);
    printf("Media              %5.1f\n", media);
    
    nota_mat = 10.0f;
    nota_port = 5.2f;
    nota_ingles = 8.0f;
    media = 5.5f;
    printf("--------BOLETIM 2bim------\n");
    printf("Materia-------------Nota\n");
    printf("Matemática         %5.1f\n", nota_mat);
    printf("Português          %5.1f\n", nota_port);
    printf("Inglês             %5.1f\n", nota_ingles);
    printf("Media              %5.1f\n", media);
    return 0;
}