//bee1142
#include <stdio.h>

int main (){

  int N, i, j, cont = 1, k;

  scanf("%d", &N);

  for (i = 0; i < N; i++){
  	
    for (j = cont, k = 0; k < 3; j++, k++){

      printf("%d ", j);

    }
    
    printf("PUM");
    printf("\n");
    cont += 4;
  }
  
  return 0;
  
}
