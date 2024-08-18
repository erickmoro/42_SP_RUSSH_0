#include <stdio.h>

int main() {
    int altura = 3;
    int largura = 1;
  
    
    if (largura <= 0){
    printf("pls whith a positive number");
    return 1;
    }
    	
     
    if (altura <= 0){
    printf("pls whith a positive number");
    return 1;
    }










    // Imprimir a parte superior da grade
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < largura; j++) {
           










 // Imprime o canto superior esquerdo ou canto superior direito
            if (j == 0) {
                printf("o");
            } if (altura <= 0){
    printf("pls whith a positive number");
    return 1;
    }













    // Imprimir a parte superior da grade
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < largura; j++) {
            // Imprime o canto superior esquerdo ou canto superior direito
            if (j == 0) {
                printf("o");
            }
            else if (
            else if (j == largura - 1) {
                printf("o");
            }
            else {
                printf("-");
            }
        }
        printf("\n");
















        // Imprimir as laterais da grade, se houver mais linhas
        if (i < altura - 1) {
            for (int j = 0; j < largura; j++) {
                // Imprime as laterais
                if (j == 0 || j == largura - 1) {
                    printf("|");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }

 
 return 0;
}
















////////////////////////////////////////leitura do teclado 

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    return 0;
}
