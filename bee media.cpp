#include <stdio.h>
 
int main() {
 
    double A, B;
    float media;
    
    scanf("%lf", &A);
    scanf("%lf", &B);
    
    
    media = (A * 0.35) + (B * 0.75) / 5.5;
    
    printf("MEDIA = %.5f\n", media);
 
    return 0;
}
