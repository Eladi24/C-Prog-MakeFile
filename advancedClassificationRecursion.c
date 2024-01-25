#include "NumClass.h"
/* will return if a number is Armstrong number
An Armstrong number is an n-digit number that is equal to the sum of the nth powers of its digits.
For Example: 407 = 43 + 03 + 73 = 64 + 0 + 343 = 407
*/
int isArmstrong(int n) {
    int exponent = numOfDigits(n);
    if (n == checkArmstrong(n, n, exponent)) 
    {
        return 1;
    } else {
        return 0;
    }
    
}

int checkArmstrong(int n, int original_n, int exponent) {
    if (n == 0)
    {
        return 0;
    }
    int r = n % 10;
    return power(r, exponent) + checkArmstrong(n /10, n, exponent);
    
}

/* will return if a number is a palindrome */
int isPalindrome(int n) {
    int sum = 0;
    sum = reverse(n, 0);
    if (n == sum)
    {
        return 1;
    }
    
    return 0;
}

int reverse(int n, int sum) {
    if (n == 0)
    {
        return sum;
    }
    
        int rem = n % 10;
        sum = sum * 10 +rem;
        return reverse(n / 10, sum); 
}

int power(int base, int exponent) {

    if (exponent == 0) 
    {
        return 1;
    }

    return base * power(base, exponent -1);

}

int numOfDigits(int n) {
    if (n < 10)
    {
        return 1;
    }
    return 1 + numOfDigits(n/10);
}