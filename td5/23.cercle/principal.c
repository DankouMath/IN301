#include <stdio.h>
#include "circonference.h"
#include "surface.h"

int main()
{
	int r;
	scanf("%d",&r);
	printf("circonf = %f, surface = %fi\n", circonference(r), surface(r));
	return 0;
}
