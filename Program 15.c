// Accept one Character from user and check whether that character is vowel
// 
// Input : 		E			// output : TRUE
// Input : 		d			// output : FALSE

#include<stdio.h>

typedef int BOOL;
#define TRUE 1;
#define FALSE 0;

 int ChkVowel(char cValue)
{
	

	if(     )
	{
		return TRUE;
	}
	else 
	{
		return FALSE;
	}
	
}

int main()
{
	char cValue = '\0';
	BOOL bRet = FALSE; 
	
	printf(" Enter character \n");
	scanf("%d",&cValue);

	bRet = ChkVowel(cValue);

	if(bRet == 1)
	{
		printf("its vowel");
	}
	else
	{
		printf("its not a vowel");		
	}

	return 0;
}