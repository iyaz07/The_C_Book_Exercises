#include <stdio.h>
int main ()
{ 
	float fahr, celsius; 
	int lower, upper, step; 
	
	lower = 0; 
	upper = 300; 
	step = 20; 
	fahr = lower; 
	/* lower limit of temperature table */ 
 	/* step size */ 
	printf("fahr\tcelsius\n");
	for (fahr = upper; fahr >= lower; fahr = fahr - step) 
	{
		celsius = (5.0/9.0) * (fahr - 32.0);	
		printf("%3.0f\t%6.1f\n", fahr, celsius);
	}
}
