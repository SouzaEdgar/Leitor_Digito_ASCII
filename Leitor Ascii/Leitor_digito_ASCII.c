#include <stdio.h>


int main() {
    int caractere;

    printf("Digite algum caractere: ");
    caractere = getchar();

    while (caractere != 27) {
        if (caractere >= 0 && (caractere <= 31 || caractere == 127)){
            printf("Caractere de controle.\n");
        } else if (caractere >= 32 && caractere <= 126) {
            if (caractere >= 65 && caractere <= 90) {
                printf("Caractere alfabetico maiusculo.\n");
            } else if (caractere >= 97 && caractere <= 122) {
                printf("Caractere alfabetico minusculo.\n");
            }
        } else if (caractere >= 48 && caractere <= 57) {
            printf("Caracatere numerico.\n");
        } else {
            printf("Caractere de pontuacao.\n");
            }

        printf("\nDigite algum caractere: ");
        caractere = getchar();
    }

    return 0;
}
