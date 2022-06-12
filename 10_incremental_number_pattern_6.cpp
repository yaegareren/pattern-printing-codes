/*

1
2 3      
4 5 6      -----> incremental number pattern 6
7 8 9 10 
11 12 13 14 15 

loop1 (outer loop) is required for number of levels and loop2 (inner loop) prints the elements.
loop1 starts from i=1 and 1 <= 5 so we move to loop2 where j=1 and 1<=1 conditon is satisfied so we move
inside loop2 where x++ (post increment) happens and x=1 is printed and it is incremented to 2. After
this execution j++ happens where j becomes 2 and 2 <= 1 condition is not met and we come out of the 
loop. Cursor moves to a new line and control goes back to loop1 where i++ happens and i becomes 2 and
2 <= 5 so we move inside loop1 where j starts from 1 and 1 <= 2 so we move inside loop2 and x=2 is 
printed and x is incremented to 3. Once again, x=3 is printed as 2 <= 2 (due to j++) is still satisfied.
x is incremented to 4. 

This repeats for all the 5 levels

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n, x=1 ;
    cout<<"Enter the number of levels: ";
    cin>>n;
    for(int i=1; i<=n; i++){  // loop1

        for(int j=1; j<=i; j++){  // loop2

            cout<<x++<<" ";
        }
        cout<<endl;
    }
    return 0;
}
