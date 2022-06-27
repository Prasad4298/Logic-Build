/*
Q.1) Write generic program which accept one value and one number from user. 
	 Print that value that number of times on screen.

input:	M	7
output: M	M	M	M	M	M	M	

input:	11	3
output:	11	11	11

input:	3.7		6
output:	3.7 	3.7		3.7		3.7		3.7		3.7		3.7

*/

#include<iostream>
using namespace std;

template<class T>
void Display(T value, int iSize)
{
	int i = 0;
	
	for(i = 1; i <= iSize; i++)
	{
		cout<<value<<"\t";
	}

	cout<<"\n";
}

int main()
{
	char cValue = '\0';
	int iNo = 0, iCnt = 0;
	float fValue = 0.0;

	cout<<"Enter the character"<<endl;
	cin>>cValue;
	cout<<"Enter the Count to display :"<<cValue<<endl;
	cin>>iCnt;
	Display(cValue,iCnt);
	
	cout<<"Enter the integer number :"<<endl;
	cin>>iNo;
	cout<<"Enter the Count to display :"<<iNo<<endl;
	cin>>iCnt;
	Display(iNo,iCnt);
	
	cout<<"Enter the float Value"<<endl;
	cin>>fValue;
	cout<<"Enter the Count to display :"<<fValue<<endl;
	cin>>iCnt;
	Display(fValue,iCnt);

	return 0;
}
