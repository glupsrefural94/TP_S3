#include <stdio.h>
#include <stdlib.h>
#include "isqrt.h"

int main(void)
{

for(int compteur = 0 ; compteur <= 200 ; compteur+=8)

{

  printf("isqrt(%d) = %lu\n", compteur, isqrt(compteur));

}

 return 0;

}
