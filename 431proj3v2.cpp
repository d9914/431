

/*Program written to print concentric square utilizing recursion
 Written by Domiano Altieri
 October 2022
 Language: C++ (Codeblocks 64bit g++ compiler)
*/
#include <iostream>
using namespace std;

/*Class Sqaure with public array result and function printsore 
 whose purpose is to recursivley print the square
 Written by Domiano Altieri
 October 2022
 Language: C++ (Codeblocks 64bit g++ compiler)
*/
class Sqaure{
public:
        char result[15][15];

        void printstore(Sqaure z, int x, int y, int k){
         cout<<z.result[x][y]<<" ";
          if(x==k && y==k)
		  {
              return;
          }
          else if(y==k)
          {
              cout<<endl;
              z.printstore(z,x+1,1,k);
          }
          else
          z.printstore(z,x,y+1,k);
        }
};

/*Program written to print concentric square utilizing recursion
 Written by Domiano Altieri
 October 2022
 Language: C++ (Codeblocks 64bit g++ compiler)
*/
int main()
{
	string n;
    cout<<"Enter a string less than 7 characters long"<<endl;
    cin>>n;
    Sqaure t;
    
    int Size = n.length() * 2;
	t.result[Size][Size];

    for(int i = 1; i <= Size; i++)
    {
        for(int j = 1; j <= Size; j++)
        {
            if(abs(i - Size / 2) > abs(j - Size / 2))
                t.result[i][j] = n[abs(i - Size / 2)];
            else
                t.result[i][j] = n[(abs(j-Size / 2))];
           }
    }
    t.printstore(t,1,1,Size);

}