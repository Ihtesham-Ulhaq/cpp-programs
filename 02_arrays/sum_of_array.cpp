#include<iostream>
using namespace std;
int main()
{
	int sum=0;
	int arr1[5]={10,20,30,40,50};
	for(int i=0;i<5;i++)
	{
		sum+=arr1[i];
	}
	cout<<sum<<" ";
	return 0;
}