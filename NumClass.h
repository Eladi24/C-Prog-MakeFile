#ifndef _NUMCLASS_H_
#define _NUMCLASS_H_

/* will return if a number is Armstrong number
An Armstrong number is an n-digit number that is equal to the sum of the nth powers of its digits.
For Example: 407 = 43 + 03 + 73 = 64 + 0 + 343 = 407
*/
int isArmstrong(int n);
/* will return if a number is a palindrome */
int isPalindrome(int n);
/* will return if a number is prime*/
int isPrime(int n);
/*Strong number is a special number whose sum of the factorial of digits is equal to the original number. For Example: 145 is strong number
1! + 4! + 5! = 145
*/
int isStrong(int n);

/*will return the factorial number of given n*/
int factorial(int n);

/* will return the number of digits of a given n*/
int numOfDigits(int n);

/* will return the power of a number*/
int power (int base, int exponent);
/* will return the revese number of n*/
int reverse (int n, int sum);

int checkArmstrong(int n , int original_n, int exponent);
#endif //_NUMCLASS_H_