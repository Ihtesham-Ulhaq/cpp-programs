#include<iostream>
using namespace std;
int main()

{
	int n1 , n2 ,sum,diff,product,division,mod;
	
	cout << "Enter two integers: ";
	cin  >> n1 >> n2 ;
	
	sum = n1 + n2 ;
	diff = n1 - n2;
	product = n1 * n2 ;
	division = n1 / n2 ;
	mod = n1 % n2 ;
	cout << "sum is: " << sum << "\nDifference is: " << diff << "\nProduct is: " << product << "\nDivision is: " << division << "\nModulus is: " << mod << endl;
	
	return 0; 
}