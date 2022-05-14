#include<iostream>
using namespace std;

int main()
{
	int i=10;
	
	cout << "\nList of Even Numbers from 1 to " << i << " are\n"; 
	for(int i = 1; i <=10; i++)
  	{
  		if ( i % 2 == 0 )
  		{
  			cout << i <<" ";
		}	
  	}
      
		
 	return 0;
}