#include <stdio.h>

int GCD(int a, int b);

int main(void) 
{
	int num1, num2;
	printf("두 개의 정수를 입력하세요: ");
	scanf("%d %d", &num1, &num2);
	
	printf("두 수의 최대공약수는 %d 입니다. \n", GCD(num1, num2)); 
	return 0;
}

int GCD(int a, int b)
{
    int tmp;
	// a must be bigger than b
	// GCD(a, b) == GCD(b, a)
    if (a < b)
    {
		int temp = a;
		a = b;
		b = temp;
	}
	
	// GCD(a, b) = GCD(b, r)
    while (b != 0)
    {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}