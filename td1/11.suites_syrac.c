#include <stdio.h>

int main()
{
	int u = 20;
	int i = 0;
	printf("%d\n", u);
	while(u!= 1)
	{
		if(u%2 == 0)
		{
			u = u/2;
		}
		else
		{
			u = 3*u + 1;
		}
		printf("%d\n", u);
		i++;
	}
	printf("nb_iter : %d", i);
	return 0;
}
