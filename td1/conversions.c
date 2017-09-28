#include <stdio.h>

int main()
{
	int t = 3600; //temps en seconde
	int h = 0; int m = 0; int s = 0;
	
	m = t/60;
	s = t%60;
	
	h = m/60;
	m = m%60;
	
	printf("%d : %d  : %d",h,m,s);
	
	return 0;
}
