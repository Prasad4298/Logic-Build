/*
Q.4) Write generic program to accept N values from user and return Largest values.
*/

#include<iostream>
using namespace std;

template<class T>
T Max(T *arr, int iSize)
{
	T Max = arr[0];
	int i = 1;

	for(i = 1; i < iSize; i++)
	{
		if(Max < arr[i])
		{
			Max = arr[i];
		}
	}

	return Max;
}

int main()
{
	int iRet = 0;
	float fRet = 0.0f;

	int arr[] = {10,20,30,40,50};
	float brr[] = {10.0,3.7,9.8,8.7};	

	iRet = Max(arr,5);
	printf("Maximum Number is : %d \n",iRet);

	fRet = Max(brr,4);
	printf("Maximum Number is : %f \n",fRet);

	return 0;
}
