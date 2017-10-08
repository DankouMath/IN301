#include <stdio.h>
#include <math.h>

double calc_suite(int k, int n)
{
	if(k == n)
	{
		 return sqrt(n);
	}
	else
	{
		return sqrt(k + calc_suite(k+1, n));
	}
}


int main()
{
	int n;
	for(n = 1; n < 100; n++)
	{
		printf("%f", calc_suite(1,n));	
	}
	return 0;
}
