#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three number:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	{
		printf("%d is the greatest value");
	}
	if(b>a&&b>c)
	{
		printf("%d is the greeatest value");
	}
	if(c>a&&c>b)
	{
		printf("%d is the greatest value");
	}
}
