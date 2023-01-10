#include <stdio.h>

main()
{
	int a,b;
	printf("a=");
	scanf("%i",&a);
	printf("b=");
	scanf("%i",&b);
	if(a>b)
	{
		printf("a>b - bolshe");
	}
	else
	{
		if(a==b)
		{
			printf("a=b - ravno");
		}
		else
		{
			printf("a<b - menshe");
		}
	}
}
