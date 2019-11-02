#include<stdio.h>
#include<stdlib.h>

int main(void)
{

	char str1, str2;
	printf("Enter an alphabet:");
	scanf_s("%c", &str1);//%s¤£¥[&
	if ((int)str1 >= 65 && (int)str1 <= 90)
	{
		str2 = str1 + 32;
		printf("Change case: %c\n", str2);
	}
	else if ((int)str1 >= 97 && (int)str1 <= 122)
	{
		str2 = str1 - 32;
		printf_s("Change case: %c\n", str2);
	}
	system("pause");
	return 0;
}