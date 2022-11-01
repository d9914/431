/*Written by Domiano Altieri
Language Used C
9/16/2022
The purpose of this program is to utilize global variables in 
order to query the user for two numbers to divide and then display
the numerator, denominator, quotient and remainder*/


#include <stdio.h>

int N,D,Q,R; //declaration of global variables

int intdiv(){ //function respoisble for running algorithm to calcuate division via subtraction
    Q=0;
    int i=N; //save copy of original numerator
    while(i>=D){
        i=i-D;
        ++Q;
    }
    R=i;
    return 0;
}

int main() {
   
   printf("Enter a positive Integer for N ");
   scanf("%d",&N);
   printf("Enter a positive Integer for D ");
   scanf("%d",&D);
   intdiv(); //call function
   printf("%d, %d, %d, %d,", N,D,Q,R);
    }



