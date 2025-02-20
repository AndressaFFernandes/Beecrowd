#include <stdio.h>

int calc_min(int h1, int m1, int h2, int m2){
    
	int min_inicial, min_alarme;
    
	min_inicial = h1 * 60 + m1;
	min_alarme = h2 * 60 + m2;
	
	if (min_alarme <= min_inicial) {
        min_alarme += 24 * 60;
    }  
    
	return min_alarme - min_inicial;
}

int main(){
    
	int h1, m1, h2, m2, calculo;
    
    while(1){
	scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
	
	if( h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0){
		break;
	  }
	  
	  	calculo = calc_min(h1, m1, h2, m2);
	  	
	  	printf("%d\n", calculo);
    }  
    
    
    
	return 0;
}

