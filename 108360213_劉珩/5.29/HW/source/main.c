#include<stdio.h>
#include<stdlib.h>

int multiple(int x,int y)
{
	int j;
	for (int i = 1; i <= y; i++)
	{
		j = x * i;
		if (j%y == 0)
			break;
	}
	return j;
}
void main(void)
{
	int a, b,c;
	printf("Enter two integers:");
	scanf_s("%d %d", &a, &b);
	c = multiple(a, b);
	printf("The LCM is: %d\n", c);
	system("pause");
	return 0;
}
