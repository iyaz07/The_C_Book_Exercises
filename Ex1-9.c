#include <stdio.h>

int main()
{
	int c, lastChar;
	lastChar = EOF; // Set last character to a non-space value

		while ((c = getchar()) != EOF) 
		{
		if (c == ' ')
		{
			if (lastChar != ' ')
			{
				putchar(c);
			}
			else
			{
				putchar(c);
	        	}
		lastChar = c;
		}
		}
        return 0;
}
