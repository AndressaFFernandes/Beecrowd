#include <stdio.h>

int main(){
	
	int impar[5], par[5], num[15];
	int contI = 0, contP = 0, i, j, x;
	
	for(i=0; i < 15; i++){
		scanf("%d", &num[i]);
    }

    for (i = 0; i < 15; i++) {
        if (num[i] % 2 == 0) {
            par[contP] = num[i];
            contP++;
            // Quando o vetor de pares estiver cheio
            if (contP == 5) {
                for (j = 0; j < 5; j++) {
                    printf("par[%d] = %d\n", j, par[j]);
                }
                contP = 0; 
            }
        } else {
            impar[contI] = num[i];
            contI++;
            // Quando o vetor de ímpares estiver cheio
            if (contI == 5) {
                for (x = 0; x < 5; x++) {
                    printf("impar[%d] = %d\n", x, impar[x]);
                }
                contI = 0;
            }
        }
    }

    for (i = 0; i < contI; i++) {
        printf("impar[%d] = %d\n", i, impar[i]);
    }

    // Impressão dos valores restantes no vetor par
    for (i = 0; i < contP; i++) {
        printf("par[%d] = %d\n", i, par[i]);
    }

    return 0;
}
