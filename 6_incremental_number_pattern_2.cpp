/*

1 1 1 1 1
2 2 2 2
3 3 3        -----> incremental number pattern 2
4 4
5

  i starts from 1 and 1 <= 5 so we move to loop2 where j=1 and j <= 1 so i=1 is printed and we move back to loop2 where j++ happens and now j=2. 2 <= 1
  condition is not met so we come out of loop2 and last statement of loop1 is executed and cursor moves to a newline. We move back to loop1 where i is
  incremented and i=2. 2 <= 5 so we go to loop2 where j=1 and 1 <= 2 so i=2 is printed for 2 times before j becomes 3 and again 3 < = 2 condition is not
  met so we come out of the loop and again cursor moves to a newline. We go to loop1 where i becomes 3 and 3 <= 5 and same process is repeated again.

*/
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout<<"Enter the number of levels: ";
    cin>>n;
    for(int i=n; i>=1; i--){  // loop1

        for(int j=1; j<=i; j++){  // loop2

            cout<<(n-i+1);
        }
        cout<<endl;
    }
    return 0;
}
