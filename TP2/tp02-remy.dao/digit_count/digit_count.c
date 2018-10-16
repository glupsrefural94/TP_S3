unsigned char digit_count(unsigned long n)
{
  unsigned long cpt = 0;
  if(n==0)
    {
      return (char)1;
    }
  while (n !=0)
    {
      n /= 10;
      cpt++;
    }
  return (char)cpt;
}

