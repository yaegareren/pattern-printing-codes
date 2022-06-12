/*

*
* *
* * *        -----> Triangle pattern 1
* * * *
* * * * *

        *
      * *    ------> Triangle pattern 3
    * * *
  * * * *
* * * * *


  triangle pattern 1 and triangle pattern 3 are similar except the fact that in triangle pattern 3 spacing happens first.

  i starts from 1. 1 < 5 so it enters into second loop. k starts from 4 and 4 > 0 so a space is printed and this happens 4 times until 0 > 0 condition occursand control comes out of the loop2 and moves to third loop where j=1 and 1<=1 condition is met so the first star is printed. The last statement of loop1 is executed and cursor moves to a new line and control moves to loop1 where i is incremented and i=2. 2 < 5 so we move to loop2 where k=3 so 3 spaces are printed
  eventually and we come out of that loop and move to loop3 where j =1 and 1 <= 2 condition is met so the loop2 runs 2 times until j becomes 3 and we come out of that loop and again the final statement of loop 1 is exectued and cursor moves to a newline and we move to loop1 where i ++ happens and i = 3.
  
  This process gets repeated until 5 levels are printed


*/

#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout<<"Enter the number of levels: ";
    cin>>n;
    for(int i=0; i<=n; i++){  // loop1

            for(int k=n-i; k>0; k--) //loop2
               cout<<" ";

        for(int j=1; j<=i; j++){  // loop3

            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
