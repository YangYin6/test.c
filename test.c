#include<stdio.h>
int main()
{
	int num =0;
	printf("Enter you number: ");
	scanf_s("%d", &num);
	if (num % 2 == 1)
		printf("This is a ����");
	else
		printf("This is a ż��\n");
	return 0;
}