#include "NumClass.h"
/* will return if a number is Armstrong number
An Armstrong number is an n-digit number that is equal to the sum of the nth powers of its digits.
For Example: 407 = 4^3 + 0^3 + 7^3 = 64 + 0 + 343 = 407
*/
int isArmstrong(int n) {
    int result;
    result = 0;
    int original_n = n;
    int r;
    int sum = 0;
    int exponent = numOfDigits(n);
    while (n != 0)
    {
        r = n % 10;
        sum += power(r, exponent); 
        n = n/10;
    }
    if (sum == original_n)
    {
        result = 1;
    }
    
    return result;
}

int numOfDigits(int n) {
    int r = 1;
    if (n < 0)
    {
        n = -n;   
    }
    while (n > 9) 
    {
        n /= 10;
        r++;
    }
    return r;
}

int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }
    
    return result;
}

/* will return if a number is a palindrome */
int isPalindrome(int n) {
int original_n = n;
int reversedNum = 0;
int r;
int result = 0;
while (n != 0)
{
    r = n % 10;
    reversedNum = reversedNum * 10 +r;
    n = n/10;
}
if (reversedNum == original_n) 
{
    result = 1;
}

return result;
}
