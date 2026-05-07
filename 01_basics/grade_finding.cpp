#include<iostream>
using namespace std;
int main()
{
	int marks;
	cout<<"Enter marks: ";
	cin>>marks;
	if ( marks>=90&& marks<=100)
	  {
	  	cout<<"your grade is A";
	  }
	else if(marks>=80&& marks<90)
	   {
	   	cout<<"your grade is B";
	   }
    else if (marks>=70&& marks<80)
	  {
	  	cout<<"your grade is C";
	   } 
	else if (marks>=60 && marks<70)
	   {
	   	cout<<"your grade is D";
	   }
	else if (marks<60 && marks>=0 )
	   {
	   	cout<<"your grade is F";
	   }
	else
	    {
	   	cout<<" marks invalid";
        }
      
	return 0; 
}
