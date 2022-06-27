/*
Q.4) Write generic program which accept one value and search Last occurrence of any specific value.

input:	10	20	30	10	30	40	10	40	10
Value of search Last occur : 40
Output: 8

*/

#include<iostream>
using namespace std;

template<class T>
void Reverse(T *arr, int iSize)
{	
	int i = 0;
	
	cout<<"Entered element in Reverse order :"<<endl;
	for(i = (iSize - 1); i >= 0; i--)
	{
		cout<<arr[i]<<"\t";
	}
}

int main()
{
	int iSize = 0, arr[iSize];

	cout<<"Enter the number of elements :"<<endl;
	cin>>iSize;
	cout<<"Enter the elements"<<endl;
	for(int i = 0; i < iSize; i++)
	{
		cin>>arr[i];
	}
	Reverse(arr,iSize);
	return 0;
}
