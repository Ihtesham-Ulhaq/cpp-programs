#include<iostream>
 using namespace std;
 
 int main()
 
    {
    	char vowel;
    	
		cout << "Enter a vowel :";
    	cin >> vowel;
    	
    	switch (vowel)
    	{
		  
    	 case 'a':
    	 case 'A':	
    	 	{
    	 		cout<< vowel <<" is a vowel";
    	 		break;
			}
		 case 'e':
		 case 'E':	
		   { 
		  	   	cout<< vowel <<" is a vowel";
    	 		break;
		   }
		case 'i':
		case 'I':	
    	 	{
    	 		cout<< vowel <<" is a vowel";
    	 		break;
			}
		case 'o':
		case 'O':	
    	 	{
    	 		cout<< vowel <<" is a vowel";
    	 		break;
			}
		case 'u':
		case 'U':	
    	 	{
    	 		cout<< vowel <<" is a vowel";
    	 		break;
			}
		default:
		{
			cout<< vowel << " is a constunent";
		}
       }
	return 0;	 	
	}