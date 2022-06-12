/*

* * * * *
* * * *
* * *      -----> triangle pattern 2
* *
*

    outer for loop runs for the number of levels we want to print. Inner for loop runs for the star printing.

    i starts from 5. 5 >=1 condition is met. So, we move to inside of outer for loop and j starts from 5. 5 > 0 and a star is printed. We move back to loop2 where j++ happens and j-- becomes 4 and 4 > 0 condition is met so a star is again printed. This goes for 5 times until j becomes 0. Now, 0>0 condition is not met and we come out from inside of inner loop. The outer for loop's statement i.e. endl is executed and cursor moves to a newline. We go back to loop1 where i-- happens and i becomes 4. Now 4 >=1 so control comes inside the loop and same process happens and star is printed 4 times.


*/

#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout<<"Enter the number of levels: ";
    cin>>n;

    for(int i=n; i>=1; i--){      //loop1

        for(int j=i; j>0; j--){  //loop2

            cout<<"* ";
        }
     cout<<endl;
    }

    return 0;
}
