/*

a 
a b
a b c      ----->incremental character pattern 2
a b c d 
a b c d e

loop1 is used for the levels(number of ows) and loop2 is used to print the elements. loop1 starts 
from i=1 and 1 <= 5 so we move inside loop1 where alphabet gets intialized with 'a' and then we move
to loop2 where j=1 and 1 <= 1, condition is met so alphabet (a) gets printed and incremented (to b).
j++ happens and j = 2 due to which 2 <= 1 is checked and it is false so control comes out of that loop
and cursor moves to a newline. Control goes back to loop1 where i++ happens and i becomes 2 and 2 <= 5
so we go inside loop1 where alphabet again gets initialized with 'a' and in loop2 j=1 and 1 <= 2 so
alphabet (a) gets printed and incremented to 'b' . j++ happens and j becomes 2 and 2 <= 2, condition
is met so alphabet(b) gets printed and then j++ makes j=3 after which condition is not satisfied and
control comes out of the loop and cursor moves to a newline. Now, i++ happens in loop1 and the entire
process is repeated.

This goes on for 5 rows.

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of levels: ";
    cin>>n;
    for(int i=1; i<=n; i++){  // loop1
        char alphabet= 'a';

        for(int j=1; j<=i; j++){  // loop2

            cout<<alphabet++<<" ";
        }
        cout<<endl;
    }
    return 0;
}