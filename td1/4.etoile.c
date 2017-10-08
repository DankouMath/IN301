#include <stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	while(j < 10)
	{
		i = j+1;
		while(i < 10)
		{
			printf(" ");
			i++;
		}
		printf("*\n");
		j++;
	}
	return 0;
}
