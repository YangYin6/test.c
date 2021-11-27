#include<stdio.h>
struct person
{
	char name[40];
	float weight;
	float height;
};
int main()
{
	int line = 0;
	int a = 2021;
	int b = 2022;
	int sum1 = a + b;
	int sum2 = a / b;
	struct person YangYin = { "YangYin",54,173 };
	struct person* p = &YangYin;
	printf("My name is %s\n", p->name);
	printf("My weight is %f\n", p->weight);
	while (line < 20)
	{
		if (a < b)
		{
			sum1 = a + b;
			printf("%d\n", sum1);
		}
		
		else
		{
			sum2 = a * b;
			printf("%d\n", sum2);
		}
		line++;
	}

	return 0;
}