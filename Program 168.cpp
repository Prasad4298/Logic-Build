/*
Q.4) Write generic program to accept N values from user and return Smallest values.
*/

#include<iostream>
using namespace std;

template<class T>
T SmallN(T *arr, int iSize)
{
	T small = arr[0];
	int i = 1;

	for(i = 1; i < iSize; i++)
	{
		if(small > arr[i])
		{
			small = arr[i];
		}
	}

	return small;
}

int main()
{
	int iRet = 0;
	float fRet = 0.0f;

	int arr[] = {10,20,30,40,50};
	float brr[] = {10.0,3.7,9.8,8.7};	

	iRet = SmallN(arr,5);
	printf("Smallest Number is : %d \n",iRet);

	fRet = SmallN(brr,4);
	printf("Smallest Number is : %f \n",fRet);

	return 0;
}
