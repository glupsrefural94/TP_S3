unsigned long fibo(unsigned long n)
{
    unsigned long i = 0;
    unsigned long j = 1;
    unsigned long temp;
    for (unsigned long k = 0; k < n; k++) {
        temp = i + j;
        i = j;
        j = temp;
    }
    return i;
}
