#include <stdio.h>
#include "NumClass.h"
int main()
{
	int num1;
	int num2;
	// Get user input
	//printf("Enter a number1: ");
	scanf("%d", &num1);

	//printf("Enter a number2: ");

	scanf("%d", &num2);
	// all primes in range
	printf("The Armstrong numbers are:");
	for (int i = num1; i <= num2; i++)
	{
		if (isArmstrong(i))
		{
			
			printf(" %d", i);
		}
	}

	printf("\nThe Palindromes are:");
	for (int i = num1; i <= num2; i++)
	{
		if (isPalindrome(i))
		{
			
			printf(" %d", i);
		}
	}
	
	printf("\nThe Prime numbers are:");
	for (int i = num1; i <= num2; i++)
	{
		if (isPrime(i))
		{
			
			printf(" %d", i);
		}
	}
	
	printf("\nThe Strong numbers are:");
	for (int i = num1; i <= num2; i++)
	{
		if (isStrong(i))
		{
		
			printf(" %d", i);
		}
	}

	printf("\n");
	return 0;
}