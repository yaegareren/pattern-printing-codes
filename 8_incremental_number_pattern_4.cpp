/*
1 1 1 1 1
2 2 2 2
3 3 3        -----> incremental number pattern 2
4 4
5

1 1 1 1 1
  2 2 2 2
    3 3 3    -----> incremental number pattern 4
      4 4
        5

  incremental number pattern 2 and 4 are exact opposite (mirror opposite). Here i starts from 5 and 
  5 >=1 condition is met and we move to loop 2 where k=0 and 0>0 condition is false so we don't go 
  inside the loop2 and move to loop3 where j=1 and 1<=5 so we move inside loop3 where (n-i+1) i.e. 1
  is printed. This goes for 5 times as j++ keeps on happening for 5 times. And then j<= i condition
  becomes false and we move to the last statement of loop1 and cursor moves to a newline and control
  goes back to loop1 where i-- happens and now i becomes 4 and again 4 >= 1 conditon is met and we move
  to loop2 where k=1 and 1>0 so a space is printed after which we move to loop3 where j=1 and 2 is
  printed for 4 times until j <= i condition is false. This keeps on repeating for 5 levels.

*/
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout<<"Enter the number of levels: ";
    cin>>n;
    for(int i=n; i>=1; i--){  // loop1

      for(int k=n-i; k>0; k--) //loop2
         cout<<" ";

        for(int j=1; j<=i; j++){  // loop3

            cout<<(n-i+1);
        }
        cout<<endl;
    }
    return 0;
}
