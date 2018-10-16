unsigned long facto(unsigned long n)
{
  if (n==0)
    return 1;
  else
    {
    for(int i = n-1 ; i !=0 ; i--)
      {
	n*= i;
      }
    return n;
    }
}
