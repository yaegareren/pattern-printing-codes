/*

    1
   1 1
  1 2 1    -----> Pascal's triangle
 1 3 3 1
1 4 6 4 1

loop1 is used to print rows of pascals triangle. Loop2 is used to assign spaces and 
loop3 is used to print the elements and a space. loop1 runs 5 times. In first iteration, i=1 and 1 <= 5 so we move inside loop1 and coef is assigned 1. In loop2, k=4 and space is printed four times as loop runs for 4 times until 0<0 condition is not satisfied. In loop3, j=1 and 1 <=1, condition is met and coef(1) is printed and is calculated under the formula [ coef*=(i-j)/j ] which comes out to be 0. j++ happens(j becomes 2) and condition is not satisfied, therefore we come out of the loop and cursor moves newline from where control goes back to loop1 and i++ happens and i=2. 2 <= 5 so we move inside loop1 where coef=1 and then k=3 and 3 spaces are printed. In loop3, j=1 and 1 <= 2 so coef (1) is printed with a space and next coef is calculated(1) which is again printed with a space as j++ makes j=2 and condition is still satisfied.

This goes on for 5 levels.

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout<<"Enter the number of levels: ";
    cin>>n;

    for(int i=1; i<= n; i++){     // loop1

      int coef=1;

      for(int k=n-i; k>0; k--)    //loop2

        cout<<" ";             

        for(int j=1; j<=i; j++){  //loop3

          cout<<coef<<" ";
          
          coef=coef*(i-j)/j;
        }
        cout<<endl;
    }
    

    return 0;

}