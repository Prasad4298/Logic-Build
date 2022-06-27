/*
Q.2) Write generic program to find largest number from three numbers.

*/

#include<iostream>
using namespace std;

template<class T>
T Max(T no1, T no2, T no3)
{
	T Max = no1;

	if(Max < no2)
	{
		Max = no2;
	}

	if(Max < no3)
	{
		Max = no3;
	}

	return Max;
}

int main()
{
	int iNo1 = 0, iNo2 = 0, iNo3 = 0, iRet = 0;
	float fNo1 = 0.0f, fNo2 = 0.0f, fNo3 = 0.0f, fRet = 0.0f;

	printf("Enter three Integer number \n");
	scanf("%d\n%d\n%d", &iNo1, &iNo2, &iNo3);
	iRet = Max(iNo1, iNo2, iNo3);
	printf("Maximum number is : %d \n",iRet);

	printf("Enter three float number \n");
	scanf("%f\n%f\n%f", &fNo1, &fNo2, &fNo3);
	fRet = Max(fNo1, fNo2, fNo3);
	printf("Maximum number is : %f \n",fRet);
	
	return 0;
}
