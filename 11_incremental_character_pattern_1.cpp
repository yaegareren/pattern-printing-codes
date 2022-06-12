/*

a 
b b
c c c      ----->incremental character pattern 1
d d d d 
e e e e e

loop1 is used for the levels(number of ows) and loop2 is used to print the elements. loop1 starts 
from i=1 and 1 <= 5 so we move inside loop1 where in loop2 j=1 and 1 <= 1 condition is met and we go
inside loop2 where alphabet=a is printed. Control goes back to loop2 where j++ happens and j becomes 2
2 <= 1 condition is not met and we come out of loop2 and alphabet is incremented (to b) and cursor 
moves to a new line. Control goes to loop1 where i++ happens and i=2 and 2 <= 5 so we move to loop2 
where j=1 and 1 <= 2 so alphabet gets printed two times before j becomes greater than i. Again, 
alphabet is incremented (to c).

This goes on for 5 rows.

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    char alphabet= 'a';         // alphabet initialized with character 'a'
    int n;
    cout<<"Enter the number of levels: ";
    cin>>n;
    for(int i=1; i<=n; i++){  // loop1

        for(int j=1; j<=i; j++){  // loop2

            cout<<alphabet++<<" ";
        }
        alphabet++;
        cout<<endl;
    }
    return 0;
}