#include <stdio.h>

int main ()
{

  int idade, i, cont = 0;
  float media = 0;

  do{

    scanf("%d", &idade);
    if ( idade < 0)
    {
      break;
    }

    media += idade;
    cont++;

  }while (idade > 0);

  printf("%.2f\n", media/cont);

}
