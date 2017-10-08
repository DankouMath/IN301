#include <stdio.h>

double racine(int n, double g, double d){
		double m;
		if(d-g < 0.001)
			return (d+g)/2;
		m = (d+g)/2;
		if(m*m == n)
			return m;
		else if(m*m < n){
			return racine(n, m, d);
		}
		else
			return racine(n, g, m);
}

int main()
{
	int g = 0;
	int d = 4;
	printf("%lf", racine(9, g, d));
	return 0;
}
