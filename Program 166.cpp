/*
Q.3) Write generic program to accept N values from user and return addition of that values.
*/

#include<iostream>
using namespace std;

template<class T>
T AddN(T *arr, int iSize)
{
	T iSum = arr[0];
	int i = 1;

	for(i = 1; i < iSize; i++)
	{
		iSum = iSum + arr[i];
	}

	return iSum;
}

int main()
{
	int iRet = 0;
	float fRet = 0.0f;

	int arr[] = {10,20,30,40,50};
	float brr[] = {10.0,3.7,9.8,8.7};	

	iRet = AddN(arr,5);
	printf("Addition is : %d \n",iRet);

	fRet = AddN(brr,4);
	printf("Addition is : %f \n",fRet);

	return 0;
}
