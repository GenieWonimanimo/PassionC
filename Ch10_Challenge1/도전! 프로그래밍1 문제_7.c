#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int n, largest = 0;
	printf("��� n �Է�: ");
	scanf("%d", &n);
	
	for (int k = 0; n >= pow(2, k); k++)
		largest = k;
	
	printf("������ �����ϴ� k�� �ִ��� %d \n", largest);
	return 0;
}
