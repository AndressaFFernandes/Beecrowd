#include <stdio.h>

int main(){
	
	 int op;
  float num1, num2, calc;	
	
  printf("Digite o primeiro valor: ");
  scanf("%f", &num1);
  
  printf("Digite o segundo valor: ");
  scanf("%f", &num2);
  
  printf("Digite o numero correspondente a operacao matematica: ");
  scanf("%d", &op); 
  
  switch(op){ 
    case 1:
      	calc = num1 + num2;
      	printf("%f + %f = %.1f\n", num1, num2, calc);
      	break;
    case 2:
    	calc = num1 - num2;
      	printf("%f - %f = %.1f\n", num1, num2, calc);
      	break;
    case 3: 
        calc = num1 * num2;
      	printf("%f * %f = %f.1\n", num1, num2, calc);
      	break;
    case 4:
    	calc = num1 / num2;
      	printf("%f / %f = %.3f\n", num1, num2, calc);
      	break;
    default:
    	printf("Operacao Invalida");
  }
	
	return 0;
}
