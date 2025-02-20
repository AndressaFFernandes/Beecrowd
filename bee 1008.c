#include <stdio.h>
 
int main() {
 
    int num, hrs;
    float valor, salary;
    
    scanf("%d", &num);
    scanf("%d", &hrs);
    scanf("%f", &valor);
    
    salary= hrs * valor;
    
    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2f\n", salary);
 
    return 0;
}
