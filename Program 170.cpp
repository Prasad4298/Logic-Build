/*
Q.2) Write generic program which accept one value and Count frequency of any specific value.

input:	10	20	30	10	30	40	10	40	10
Value to check frequency : 10
Output: 4

*/

#include<iostream>
using namespace std;

template<class T>
void Display(T *arr, int iSize, T iNo)
{	
	int i = 0, Frequency = 0;
	
	for(i = 0; i < iSize; i++)
	{
		if(arr[i] == iNo)
		{
			Frequency++;
		}
	}
	cout<<"The Frequency is :"<<Frequency<<endl;
}

int main()
{
	int iRet = 0, iSize = 0, arr[iSize], iNo = 0;

	cout<<"Enter the number of elements :"<<endl;
	cin>>iSize;
	cout<<"Enter the elements"<<endl;
	for(int i = 0; i < iSize; i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter number for calculate frequency :"<<endl;
	cin>>iNo;
	Display(arr,iSize,iNo);

	return 0;
}
