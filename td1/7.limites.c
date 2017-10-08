#include <stdio.h>

int main()
{
	double s = 0;
	int n = 1;
	double eps = 0.1;
		 
	while(1 >= eps*n*n)
	{
		s += 1.0/(n*n);
		n++;
	}
	printf("%f\n", s);
}
