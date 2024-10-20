#include<stdio.h>
int main()
{
	char alpha;
	int z;
	printf("Enter an alphabet");
	scanf("%c",&alpha);
	z=alpha;
	switch(z)
	{
		case 97:printf("Its a vowel");break;
		case 101:printf("Its a vowel");break;
		case 105:printf("Its a vowel");break;
		case 111:printf("Its a vowel");break;
		case 117:printf("Its a vowel");break;
		case 65:printf("Its a vowel");break;
		case 69:printf("Its a vowel");break;
		case 73:printf("Its a vowel");break;
		case 79:printf("Its a vowel");break;
		case 85:printf("Its a vowel");break;
		default:printf("Its a consonant");break;
	}
	return 0;
}
