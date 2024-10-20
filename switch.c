#include<stdio.h>
int main()
{
	int a,num=2;
	printf("Enter a value:");
	scanf("%d",a);
	switch(num)
	{
		case 1:
		printf("one\n");
		break;
		case 2:
		printf("two\n");
		case 3:
		printf("three\n");
		break;
		case 4:
		printf("four\n");
		break;	
	}
	return 0;
}
