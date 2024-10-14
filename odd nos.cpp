#include<stdio.h>
int main()
{
	int i,n;
	printf("enter a vallue : ");
	scanf("%d",&n);
	i=1;
	while(i<=n*2)
	{
		if(i%2==1)
		{
			printf("%d\t",i);
		}
	    i++;
	}	
}
