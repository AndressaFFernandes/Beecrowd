#include <stdio.h>
 
int main() {
    
    int X;
    /* distancia em km*/
    float Y;
    /*litros de combustivel*/
    float consumo;
    
    scanf("%d", &X);
    scanf("%f", &Y);
    
    consumo= X / Y;
    
    printf("%.3f km/l\n", consumo);
 
    return 0;
}
