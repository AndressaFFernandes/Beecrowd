//bee1235
#include <stdio.h>
#include <string.h> // Para usar a fun��o strlen

int main() {
    int qtd_testes, tam_frase, i, j; 
    char frase[101]; 

    scanf("%d", &qtd_testes); 
    getchar();  // Ignora o '\n' que fica depois do n�mero para n�o atrapalhar

    for (i = 0; i < qtd_testes; i++) {
        fgets(frase, 101, stdin); 

    tam_frase = strlen(frase);

        if (frase[tam_frase - 1] == '\n') {
            frase[tam_frase - 1] = '\0'; //trocar o \n para n�o atrapalhar
            tam_frase--; 
        }

        // Primeira metade da linha, de tr�s pra frente
        for (j = (tam_frase / 2) - 1; j >= 0; j--) {
            printf("%c", frase[j]); // Imprime os caracteres do meio para o in�cio
        }

        // Segunda metade da linha, de tr�s para frente
        for (j = tam_frase - 1; j >= tam_frase / 2; j--) {
            printf("%c", frase[j]); // Imprime os caracteres do final para o meio
        }

        printf("\n"); 
    }

    return 0;
}

