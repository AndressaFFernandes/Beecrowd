// 971972    116479   Andressa Fernanda Fernandes

#include <stdio.h>
#include <string.h>

#define max_competidores 100
#define max_notas 7

int main(){
	
	int n_compet, i, j;
	float grau_dif, notas, soma = 0.0, maior, menor, result;
	char nome[10];
	
	
	scanf("%d", &n_compet);
     	
    //nome do competidor
	    scanf("%s", &nome);
	    
    //grau de dificuldade
		scanf("%f", &grau_dif);
		
    
       for (i = 0; i <= max_notas; i++){
     			scanf("%f", &notas);
     	}
             if(notas > maior){
           		maior = notas;
           		
    		}if(notas> menor){
    				menor = notas;
    	     	}	
    	
        for (j = 0; j < max_notas; j++) {
            if (notas != maior && notas != menor) {
                soma += notas;
            }
        }
	
	result = soma * grau_dif;
	
	printf("%s\n %.2f\n", nome, result);
	
	
    	
	
	
	
	
	return 0;
}
