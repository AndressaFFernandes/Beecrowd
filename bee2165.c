// ID_BEE     RA     Nome completo
// 971973 - 117199 - Ana Carolina S. Simões
// 971972 - 116479 - Andressa Fernandes 
// 971361 - 116538 - Beatriz Barros Rodrigues
// 977214 - 116473 - Eduardo Kauan Morais Cardozo
// 862837 - 114928 - Felipe Claudiano da Silva
// 971979 - 116445 - Giovana Jacobucci

#include <stdio.h>
#include <string.h>


int main(){
	
	char T[501];
	
    fgets(T, 501, stdin);

	
	if(strlen(T) - 1 <= 140){
		printf("TWEET\n", T);
	}else{
		printf("MUTE\n");
	}
	
	
	
	return 0;
}
