#include<stdio.h>
int main()
{
	int i,a,b;
	printf("Enter two values");
	scanf("%d%d",&a,&b);
	if(a<b)
	{
		i=a;
	}
	else
	{
		i=b;
	}
	if(a>b)
	{
		i=b;
	}
	else
	{
		i=a;
	}
}
