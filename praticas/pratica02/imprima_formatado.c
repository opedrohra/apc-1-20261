#include <stdio.h>
int main(){
    
    
    printf("%s", "=============================\n");
    
    printf("%s", "N O  T  A        L E  G  A  L\n");

    printf("%s", "=============================\n");
    printf("%26s\n","PRODUTO      QTD  VALOR UNIT");
    printf("%8s %7.03i %11.2f\n","Camista",2, 39.99f);
    printf("%6s %9.03i %11.2f\n", "Calca", 3, 89.99f);
    printf("%11s %4.03i %11.2f\n", "Meia social",   3, 19.99f);
    printf("%s", "=============================\n");
    printf("%s %23.2f \n","total", 229.85f);


    return 0;
}