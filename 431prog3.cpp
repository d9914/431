#include<bits/stdc++.h>
using namespace std;


// Function to print the pattern
void printPattern(string n)
{
	int arraySize = n.length() * 2 - 1;
	char result[arraySize][arraySize];
		
	// Fill the values
	for(int i = 0; i < arraySize; i++)
	{
		for(int j = 0; j < arraySize; j++)
		{
			if(abs(i - arraySize / 2) > abs(j - arraySize / 2))
				result[i][j] = n[abs(i - arraySize / 2)];
			else
				result[i][j] = n[abs(j-arraySize / 2)];
			
		}
	}
	const int p=sizeof result[0] / sizeof(int); 
	printShop(result,0,0);
	
}

void printShop( char arr[][],int x, int y){
          
		  int rows =  sizeof arr / sizeof arr[0]; 
		  int cols = sizeof arr[0] / sizeof(int); 
		  cout<<*arr<<" ";
          if(x==rows && y==cols)
		  {
              return;
          }
          else if(y==cols)
          {
              cout<<endl;
              printShop(arr,x+1,0);
          }
          else
          printShop(arr,x,y+1);
}

int main()
{
	string n;
    cout<<"Enter a string less than 10 letters long"<<endl;
    cin>>n;
	printPattern(n);
	return 0;
}