#include <stdio.h>
#include <stdlib.h>
#include "digit_count.h"

int main(void)
{

  
  printf("digit_count(%lu) = %u\n", (unsigned long)0, digit_count(0));
  unsigned long first = 1;
  for(unsigned long compteur = 0; compteur <= 63; compteur++)
    {
      printf("digit_count(%lu) = %u\n",
	     (first<<compteur),
	     digit_count(first<<compteur)
	     );
    }
  return 0;

}
