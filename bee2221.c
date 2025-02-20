#include <stdio.h>

typedef struct infos{
	
	int ataque;
	int defesa;
	int level;

}pokemon;

int calc_Dabriel (pokemon p, int B){
	int golpe_Dabriel;
	
	golpe_Dabriel = (p.ataque + p.defesa) / 2;
	if(p.level % 2 == 0){
		golpe_Dabriel += B;
	}
	
	return golpe_Dabriel;
}

int calc_Guarte (pokemon p, int B){
	int golpe_Guarte;
	
	golpe_Guarte = (p.ataque + p.defesa) / 2;
	if(p.level % 2 == 0){
		golpe_Guarte += B;
	}
	
	return golpe_Guarte;
}

int main(){
	
	int T, B, i;
	int golpe_Dabriel, golpe_Guarte;
	
	pokemon Dabriel, Guarte;
	
	scanf("%d", &T);
	
	for(i = 0; i <= T; i++){
		scanf("%d", &B);
	}
	
	scanf("%d %d %d", &Dabriel.ataque, &Dabriel.defesa, &Dabriel.level);
	
	scanf("%d %d %d", &Guarte.ataque, &Guarte.defesa, &Guarte.level);
	
	golpe_Dabriel = calc_Dabriel(Dabriel, int B);
    golpe_Guarte = calc_Guarte(Guarte, int B);
	
	if(golpe_Dabriel > golpe_Guarte){
		printf("Dabriel\n");
	}else if(golpe_Dabriel == golpe_Guarte){
	    printf("Empate\n");	
	}else{
		printf("Guarte\n");
	}
	
	
	return 0;
}
