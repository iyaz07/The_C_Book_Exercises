#include <stdio.h>
#include <stdlib.h>

int main()
{
	int b;
	int t;
	int n;
	int c;

	while(( c = getchar()) != EOF)
	if (c = ' ')
	{
		b++;
		printf("%d", b);
	}
	else if (c = '\t')
	{
		t++;
		printf("%d", t);
	}
	else if (c = '\n')
	{
		n++;
		printf("%d", n);
	}
}
