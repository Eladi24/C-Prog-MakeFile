#include "NumClass.h"

/* will return if a number is prime*/
int isPrime(int n) {
    if (n <= 1) {
        return 0; // numbers less than or equal to 1 are not prime numbers
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; // found a divisor, number is not prime
        }
    }
    return 1; // no divisors found, number is prime
}

/*Strong number is a special number whose sum of the factorial of digits is equal to the original number. For Example: 145 is strong number
1! + 4! + 5! = 145
*/
int isStrong(int n) {
    int sum = 0;
    int original_n = n; 
    int r;
    int result;

    result = 0;

    while (n != 0) {
        r = n % 10;
        sum += factorial(r);
        n = n/10;
    }
    if (sum == original_n)
    {
        result = 1;
    }
    
    return result;
}

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <=n; i++)
    {
        fact*= i;
    }
    return fact;
}
