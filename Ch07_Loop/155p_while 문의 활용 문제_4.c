#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	unsigned int dan, num = 1;
	scanf("%d", &dan);
	while (num < 10)
	{
		printf("%d �� %d = %d \n", dan, num, dan * num);
		num++;
	}
	return 0;
}
