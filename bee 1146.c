#include <stdio.h>

int main (){

  int n, i;

   while(1){
     scanf("%d", &n);
     
     if (n == 0){	
    return 0;
    
  }else{
  	 for (i = 1; i < n; i++){
    printf("%d ", i);
    }
   	printf("%d\n", i);
  }
 }
 
 return 0;
}
