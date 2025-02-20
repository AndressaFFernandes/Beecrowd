//bee1983
#include <stdio.h>

int main(){
	
	int N, RA, RA_maior = 0, i;
	float nota, nota_maior = 0;
	
	scanf("%d", &N);
	
	for(i = 0; i < N; i++){
		scanf("%d %f", &RA, &nota);
		
		if(nota > nota_maior){
			nota_maior = nota;
			RA_maior = RA;
		}
	}
	
	if(nota_maior >= 8.0){
		printf("%d\n", RA_maior);
	}else{
		printf("Minimum note not reached\n");
	}
	
	
	return 0;
}
