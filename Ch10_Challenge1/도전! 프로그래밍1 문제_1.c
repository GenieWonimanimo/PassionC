#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	int num;
	printf("10진수 정수를 입력하세요: ");
	scanf("%d", &num);
	
	printf("16진수로 바꾸면 %#x", num);
	return 0;
}
