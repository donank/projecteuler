/*

The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?

*/

#include <iostream>

const unsigned long long num = 600851475143;
int isprime(unsigned long long x)
{
	unsigned long long i;
	if (!(x % 2))
		return false;
	for (i = 3; i*i <= num; i+=2)
	{
		if(!(x % i))
			return false;
	} 
	return true;
}
int main()
{
	
	unsigned long long max = 0;
	for(unsigned long long i = 3; i*i <= num; i+=2)
	{
		if (!(num % i))
		{
			if (isprime(i))
				max = i;
		}
	}
	std::cout<<max;
	return 0;
}
