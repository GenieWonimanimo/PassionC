#include <stdio.h>

int main(void) 
{
	int money = 3500;
	
	printf("���� ����� �����ϰ� �ִ� �ݾ�: 3500 \n");
	
	for (int i = 1; i < 8; i++)
		for (int j = 1; j < 6; j++)
			for (int k = 1; k < 8; k++)
				if ((500 * i) + (700 * j) + (400 * k) == 3500)
					printf("ũ���� %d��, ����� %d��, �ݶ� %d�� \n", i, j, k);
	
	printf("��� �����Ͻðڽ��ϱ�? \n");
	return 0;
}