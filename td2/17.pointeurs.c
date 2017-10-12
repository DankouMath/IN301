#include <stdio.h>

void permute(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void reinitPointeur(int **p)
{
	*p = NULL;
}

int main()
{
	int a = 1;
	int *p = &a;

	printf("p: %p *p: %d\n", p, *p);
	reinitPointeur(&p);
	printf("p: %p *p: %d\n", p, *p);
	return (0);

}
