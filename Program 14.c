// Accept one Character from user and convert case of that character
// 
// Input : 		a			// output : A
// Input : 		D			// output : d

#include<stdio.h>
#include<ctype.h>

 void DisplayConvert(char cValue)
{
	if(cValue >= 'a' && cValue <= 'z')
	{
		printf("%c", cValue);
	}
	else if(cValue >= 'A' && cValue <= 'Z')
	{
		printf("%c", cValue);
	}
}

int main()
{
	char cValue = 0;
	
	printf(" Enter character \n");
	scanf("%d",&cValue);

	DisplayConvert(cValue);

	return 0;
}