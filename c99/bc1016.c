#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *dis = (int *)malloc(sizeof(int));
	scanf("%d", dis);
	printf("%d minutos\n", *dis*2);
}
