#include <stdio.h>
//#include <math.h>
int main()
{
	int n = 29;
	int i = 2;
	//int sqn = sqrt(n);
	while(i < n)
	{
		if(n%i == 0)
		{
			printf("nope");
		}
		i++;
	}
}
