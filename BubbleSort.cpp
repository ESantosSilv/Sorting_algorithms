#include <stdio.h>

int main()
{
  int array[100], c, d, swap;

  printf("digite 7 numeros\n");

  for (c = 0; c < 7; c++)
    scanf("%d", &array[c]);

  for (c = 0 ; c < ( 7 - 1 ); c++)
  {
    for (d = 0 ; d < 7 - c - 1; d++)
    {
      if (array[d] > array[d+1])
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }

  printf("El orden correcto de los numeros es:\n");

  for ( c = 0 ; c < 7 ; c++ )
     printf("%d\n", array[c]);

  return 0 ;
}
