#include <stdio.h>
#include <stdlib.h>
#include "power_of_two.h"

int main(void)
{
  for(int compteur = 0; compteur <= 63; compteur++)
    {
      printf("power_of_two(%d) = %lu\n", compteur,power_of_two(compteur) );
    }
  return 0;
}
