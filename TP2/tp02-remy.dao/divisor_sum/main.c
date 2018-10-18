#include <stdlib.h>
#include <stdio.h>
#include <err.h>
#include "divisor_sum.h"


int main(int argc, char** argv)
{
  
 unsigned long param = strtoul(argv[1], NULL, 10);
 
 if(argc != 2)
   {
     errx(1, "Error");
   }
 else if (param==0)
   {
     errx(1, "Error");
   }
 else
   {
     printf("divisor_sum(%lu) = %lu\n", param, divisor_sum(param));
   }
}
