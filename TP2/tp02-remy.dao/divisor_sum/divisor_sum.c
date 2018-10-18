unsigned long divisor_sum(unsigned long n)
{
    unsigned long res = 0; 
  
    for (unsigned long i=2; i*i<=n; i++) 
    { 
        if (n%i==0) 
        { 
            if (i==(n/i)) 
                res += i; 
            else
                res += (i + n/i); 
        } 
    } 
    return (res + 1); 
}
