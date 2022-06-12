/*
 
1
2 2
3 3 3        -----> incremental number pattern 1
4 4 4 4
5 5 5 5 5


        1
      2 2
    3 3 3    -----> incremental number pattern 3
  4 4 4 4 
5 5 5 5 5

 incremental number pattern 1 and 3 are exact opposite (mirror opposite). We need to print extra space before printing
 the numbers. loop1 starts from i=1 and 1 <= 5 so we move inside where in loop2, k=4 and 4>0 so loop 2 runs 4 times
 and 4 spaces are printed until 0 > 0 condition (k-- happens) comes which is not possible. So we move to loop3 where
 j=1 and 1<=1 condition is met so i=1 is printed once and then j++ happens which makes j=2 ands 2<=1 condition is not
 satisfied so we move out from loop3 and last statement of loop1 i.e. endl is executed which brings cursor to the new line.
 Control then goes back to loop1 where i++ happens and i becomes 2 and 2<=5 so we again move to loop2 where k=3 and
 this time 3 spaces are printed before moving to loop3 where j starts from 1 and i=2 is printed and control comes
 out of that loop because j becomes 3 and 3<=2 is not possible. This process repeats for all the 5 levels.





*/
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout<<"Enter the number of levels: ";
    cin>>n;
    for(int i=1; i<=n; i++){  // loop1

            for(int k=n-i; k>0; k--) //loop2
               cout<<" ";

        for(int j=1; j<=i; j++){  // loop3

            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}
