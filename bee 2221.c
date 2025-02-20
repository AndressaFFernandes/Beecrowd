#include <stdio.h>

int main() {
    int T, B, i;
    int ataque_d, defesa_d, level_d; 
    int ataque_g, defesa_g, level_g; 

    scanf("%d", &T);

    for (i = 0; i < T; i++) {

        scanf("%d", &B);

        scanf("%d %d %d", &ataque_d, &defesa_d, &level_d)
        
        scanf("%d %d %d", &ataque_g, &defesa_g, &level_g);

        int golpe_dabriel = (Ad + Dd) / 2;
        int golpe_guarte = (Ag + Dg) / 2;

        if (level_d % 2 == 0) {
            golpe_dabriel += B;
        }
        if (level_g % 2 == 0) {
            golpe_guarte += B;
        }

        if (golpe_dabriel > golpe_guarte) {
            printf("Dabriel\n");
        } else if (golpe_guarte > golpe_dabriel) {
            printf("Guarte\n");
        } else {
            printf("Empate\n");
        }
    }

    return 0;
}
