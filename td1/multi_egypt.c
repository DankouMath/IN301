#include <stdio.h>

int main()
{
	int x = 87; int y = 24; int c = 0; int res = 0;
	while(x != 1)
	{
		if(x % 2 ==0)
		{
			x /= 2; y *= 2;
		}
		else
		{
			x --; c += y; 
		}
		printf("%d x %d + %d\n", x,y,c);
		res = x * y + c;
	}
	printf("Resultat : %d\n", res);
	
	return 0;
}
