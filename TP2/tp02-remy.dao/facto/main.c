#include <stdio.h>
#include <stdlib.h>
#include "facto.h"

int main(void)
{

for(int compteur = 0 ; compteur <= 20 ; compteur++)

{

  printf("facto(%d) = %lu\n", compteur, facto(compteur));

}

 return 0;

}
