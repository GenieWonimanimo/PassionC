#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool IsPrime(int num);
void PrintTenPrime(void);

int main(void)
{
	PrintTenPrime();		
	return 0;
}

bool IsPrime(int num)
{
	// check num has divisor other than 1 and num
	for (int i = 2; i <= sqrt(num); i++)
	{
		if (num % i == 0) // num is not prime number
			return false;
	}
	return true;
}

void PrintTenPrime(void)
{
	int cnt = 0;
	for (int n = 2; cnt < 10; n++)
	{
		// if n is prime number
		if (IsPrime(n))
		{
			printf("%d ", n); // print and
			cnt++; // increment cnt
		}
	}
}