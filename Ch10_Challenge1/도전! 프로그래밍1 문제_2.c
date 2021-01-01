#include <stdio.h>
#include <stdlib.h>

void mul(int n1, int n2);

int main(void) 
{
	int num1, num2, t;

	printf("두 개의 정수를 입력하세요: ");
	scanf("%d %d", &num1, &num2);
	
	mul(num1, num2);
	
	return 0;
}

void mul(int n1, int n2)
{
	// if n1 is bigger than n2
	if (n1 > n2) // swap n1 and n2
	{
		int tmp = n1;
		n1 = n2;
		n2 = tmp;
	}
	// print n1, n1 + 1, ..., n2 dan
	for (; n1 <= n2; n1++)
	{
		for (int i = 1; i < 10; i++)
		{
			printf("%d × %d = %2d  ", n1, i, n1 * i);
		}
		printf("\n");
	}
}


