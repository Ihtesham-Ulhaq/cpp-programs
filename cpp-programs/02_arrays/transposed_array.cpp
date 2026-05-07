#include<iostream>
using namespace std;
int main()
{
	int oriarr[3][3]={
	{1, 2, 3 },
	{4, 5 ,6 },
	{7, 8 ,9 }
	};
	cout<<" ORIGINAL METRIX: "<<endl;
	
	for( int i=0 ; i<3 ; i++){
		for( int j=0 ; j<3 ; j++){
			cout<<oriarr[i][j]<<" ";
		}
	cout<<endl;	
	}
	cout<< "TRANSPOSED METRIX: "<< endl;
	for( int i=0 ; i<3 ; i++){
		for( int j=0 ; j<3 ; j++){
			cout<<oriarr[j][i]<<" ";
		}
	cout<<endl;	
	}
	return 0;

}