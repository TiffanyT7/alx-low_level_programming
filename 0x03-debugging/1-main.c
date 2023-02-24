#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        int i;
	
	printf("Infinite loop incoming :(\n");
	
	i = 0; /*causes infinite loop*/
	
	while (i < 10)
	{
		putchar(i); /*increment i in next line so that the loop terminates at i > 10*/
	}
	
	printf("Infinite loop avoided! \\o/\n");
	
	return (0);
}
