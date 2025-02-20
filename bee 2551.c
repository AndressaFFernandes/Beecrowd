#include <stdio.h>


double cal_velocidade(int tempo, int distancia) {
    return (double)distancia / tempo;
}


void verif_recordes(int n, int tempos[], int distancias[]) {
    double recorde = -1; 
    int i;
    
    for (i = 0; i < n; i++) {
        double velocidade = cal_velocidade(tempos[i], distancias[i]);
        
        if (velocidade > recorde) {
            printf("%d\n", i + 1); 
            recorde = velocidade; 
        }
    }
}

int main() {
    int n, i;
    
    
    while (scanf("%d", &n) != EOF) {
        int tempos[30], dist[30];
        
        
        for (i = 0; i < n; i++) {
            scanf("%d %d", &tempos[i], &dist[i]);
        }
        
        verif_recordes(n, tempos, dist);
    }
    
    return 0;
}
