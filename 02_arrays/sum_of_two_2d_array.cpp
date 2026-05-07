#include<iostream>
using namespace std;
int main()

{

	int arr1[3][3]= {
	 { 1 , 2 , 3 },
	 { 4 , 5 , 6 },
	 { 7 , 8 , 9 }
	 
	};
	int arr2[3][3]= {
	{ 10 , 11 , 12 },
	{ 13 , 14 , 15 },
	{ 16 , 17 , 18 } 
	
	};
	cout<<"The sum of the metrices is: "<<endl;
	      
	for (int i=0 ; i < 3 ; i++){
		for (int j=0 ; j < 3 ; j++){
		cout<<arr1[i][j] + arr2[i][j]<<" ";
		
	         }
		cout<<endl;
		
	}
	return 0;
} 