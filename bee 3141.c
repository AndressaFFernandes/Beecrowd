// ID_BEE     RA     Nome completo
// 971973 - 117199 - Ana Carolina S. Simões
// 971972 - 116479 - Andressa Fernandes 
// 971361 - 116538 - Beatriz Barros Rodrigues
// 977214 - 116473 - Eduardo Kauan Morais Cardozo
// 862837 - 114928 - Felipe Claudiano da Silva
// 971979 - 116445 - Giovana Jacobucci


#include <stdio.h>
#include <string.h>


int calc_idade(int dia_hj, int mes_hj, int ano_hj, int dia_nasc, int mes_nasc, int ano_nasc) {
    int idade = ano_hj - ano_nasc;
    
    if (mes_hj < mes_nasc || (mes_hj == mes_nasc && dia_hj < dia_nasc)) {
        idade--;
    }
    
    return idade;
}

int main() {
    char nome[51];
    int dia_hj, mes_hj, ano_hj;
    int dia_nasc, mes_nasc, ano_nasc;
    int idade, aniversario;

    fgets(nome, 51, stdin);
    nome[strcspn(nome, "\n")] = 0;


    scanf("%d/%d/%d", &dia_hj, &mes_hj, &ano_hj);
    scanf("%d/%d/%d", &dia_nasc, &mes_nasc, &ano_nasc);


    idade = calc_idade(dia_hj, mes_hj, ano_hj, dia_nasc, mes_nasc, ano_nasc);

   if (dia_hj == dia_nasc && mes_hj == mes_nasc) {
        printf("Feliz aniversario!\n");
    }
    printf("Voce tem %d anos %s.\n", idade, nome);
    return 0;
}
