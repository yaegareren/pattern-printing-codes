/*

1
1 2      
1 2 3      -----> incremental number pattern 5
1 2 3 4 
1 2 3 4 5 

loop1 (outer loop) is required for number of levels and loop2 (inner loop) prints the elements.
loop1 starts from i=1 and 1 <= 5 so we move to loop2 where j starts from 1 and 1 <= 1 condition is met
and j=1 is printed. Control goes back to loop2 where j++ happens and j=2. 2 <= 1, condition is not met
and we move to the last line of loop1 which brings cursor to a newline. The control goes back to loop1
where i++ happens and now i=2. 2 <= 5 so we move inside loop2 where j=1 and 1  <= 2 conditon is met.
j=1 is printed on first iteration and after j++ happens, the condition is still satisfied so j=2 is
printed. 

This repeats for all the 5 levels

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout<<"Enter the number of levels: ";
    cin>>n;
    for(int i=1; i<=n; i++){  // loop1

        for(int j=1; j<=i; j++){  // loop2

            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
