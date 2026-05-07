#include<iostream>
using namespace std;

int main()
   {
	   int i, n,k,l ;
       
        for ( i = 1 ; i <= 5 ; i++)
            {
            	for ( n =  1 ;n <= i ;n++)
            	{
          	       cout<<"*";
                }
              cout<<"\n";  
			}
		 for ( k = 5 ; k >= 1 ; k--)
            {
            	for ( l =  1 ;l <= k ;l++)
            	{
          	       cout<<"*";
                }
              cout<<"\n";  
			}
	   return 0;
    }