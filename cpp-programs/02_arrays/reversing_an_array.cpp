#include<iostream>
using namespace std;
int main()
{
	int arr1[]={1, 2, 3, 4, 5};
	int size=sizeof(arr1)/sizeof(arr1[0]);
	for(int i = size-1;  i>=0; i--)
	{
		cout<<arr1[i]<<" ";
	}
}