#include <stdio.h>
#include <stdlib.h>
#include "fibo.h"

int main(void)
{

for(int compteur = 0 ; compteur <= 90 ; compteur++)

{

  printf("fibo(%d) = %lu\n", compteur, fibo(compteur));

}

 return 0;

}
