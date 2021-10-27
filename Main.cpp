bool isPrime(long i) 
{
    for (int j = 2; j < sqrt(i); j++) 
        if (i % j == 0) 
            return 0;
    return 1;
}

long long findMaxPrimeWithNDigits(int number)
{
    if (number == 1) return 7;
    long largeNum = 1;
    while (number > 0) {
        largeNum *= 10;
        number--;
    }
    for (long i = largeNum; i > sqrt(largeNum); i--) 
        if (isPrime(i)) 
            return i;
} 
