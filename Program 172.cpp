/*
Q.4) Write generic program which accept one value and search Last occurrence of any specific value.

input:	10	20	30	10	30	40	10	40	10
Value of search Last occur : 40
Output: 8

*/

#include<iostream>
using namespace std;

template<class T>
int SearchLast(T *arr, int iSize, T iNo)
{	
	int i = 0, Frequency = 0;
	
	for(i = iSize; i >= 0; i--)
	{
		if(arr[i] == iNo)
		{
			break;
		}
	}
	return i;
}

int main()
{
	int iRet = 0, iSize = 0, Arr[iSize], iNo = 0;
	char cRet = '\0', Crr[iSize], cNo = '\0';
	float fRet = 0.0f, Frr[iSize], fNo = 0.0f;

	cout<<"Enter the number of elements :"<<endl;
	cin>>iSize;
	cout<<"Enter the elements"<<endl;
	for(int i = 0; i < iSize; i++)
	{
		cin>>Arr[i];
	}
	cout<<"Value of search Last occur :"<<endl;
	cin>>iNo;
	iRet = SearchLast(Arr,iSize,iNo);
	cout<<"The Last occur is :"<<iRet<<endl;


	cout<<"Enter the float number of elements :"<<endl;
	cin>>iSize;
	cout<<"Enter the float elements"<<endl;
	for(int i = 0; i < iSize; i++)
	{
		cin>>Frr[i];
	}
	cout<<"Value of search Last occur :"<<endl;
	cin>>fNo;
	fRet = SearchLast(Frr,iSize,fNo);
	cout<<"The Last occur is :"<<fRet<<endl;


	cout<<"Enter the character number of elements :"<<endl;
	cin>>iSize;
	cout<<"Enter the character elements"<<endl;
	for(int i = 0; i < iSize; i++)
	{
		cin>>Crr[i];
	}
	cout<<"Character of search Last occur :"<<endl;
	cin>>cNo;
	cRet = SearchLast(Crr,iSize,cNo);
	cout<<"The Last occur is :"<<cRet<<endl;


	return 0;
}
