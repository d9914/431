
/*Program written to sort an array entered by user
 Written by Domiano Altieri
 October 2022
 Language: C++ (Codeblocks 64bit g++ compiler)
*/

#include <iostream>
using namespace std;


void sort();
void move();
void Findkay();

int n;
int a[100];

int main() {
   
    cout <<"How elements in the array? Must be less than 100. ";
    cin>>n;
    for(int i = 1; i <= n; i++){ 
        cout << "Enter an integer into the array "<<endl;
        cin >> a[i];
        }
    sort();
    cout<<"The sorted array is ";
    for (int y=1; y<= n; y++) {
    cout << a[y] <<' ';
    }
}

int j;


/*Function sort calls move if array out of order
 Written by Domiano Altieri
 October 2022
 Language: C++ (Codeblocks 64bit g++ compiler)
*/
void sort(){   
    for(j=1; j<=n-1; ++j){
        if(a[j]>a[j+1]){
            move();
        }
    }
    return;
}

int k;
int temp;

/*Function move calls Findkay
 Written by Domiano Altieri
 October 2022
 Language: C++ (Codeblocks 64bit g++ compiler)
*/
void move(){
    temp=a[j+1];
    a[j+1]=a[j];
    Findkay();
    a[k]=temp;
    return;
}

/*Function Findkay
 Written by Domiano Altieri
 October 2022
 Language: C++ (Codeblocks 64bit g++ compiler)
*/
void Findkay(){
    int sw=0;
    k=j;

    do{
        if(a[k-1]>temp){
            a[k]=a[k-1];
            --k;
        }
        else{
            sw=1;
        }
        }while(k>1 && sw==0); 
            return;
}
