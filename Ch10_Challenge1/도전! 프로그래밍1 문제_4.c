#include <stdio.h>

int main(void) 
{
	int money = 3500;
	
	printf("현재 당신이 소유하고 있는 금액: 3500 \n");
	
	for (int i = 1; i < 8; i++)
		for (int j = 1; j < 6; j++)
			for (int k = 1; k < 8; k++)
				if ((500 * i) + (700 * j) + (400 * k) == 3500)
					printf("크림빵 %d개, 새우깡 %d개, 콜라 %d개 \n", i, j, k);
	
	printf("어떻게 구입하시겠습니까? \n");
	return 0;
}