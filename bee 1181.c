#include <stdio.h>

int main() {
    int L, i, j;
    char T;
    float M[12][12], result = 0.0;

    
    scanf("%d %c", &L, &T);

    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%f", &M[i][j]);
        }
    }

    for (i = 0; i < 12; i++) {
        result += M[L][i];
    }

    
    if (T == 'M') {
        result /= 12.0;
    }

    printf("%.1f\n", result);

    return 0;
}
