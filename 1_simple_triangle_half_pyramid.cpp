/*

*
* *
* * *    -----> Triangle pattern 1
* * * *
* * * * *

    outer for loop runs for the number of levels we want to print. Inner for loop runs for the star printing.

i starts from 1. 1 < 5 so it enters into second loop. j=1 and 1<=1 condition is met so the first
star is printed. Then the control goes back to loop2 and increment happens and j becomes 2 and the
condition for j<=i is again checked but here 2 <= 1 condition is not met and execution comes out of
that loop. We come to the next line and execution goes back to first loop where i is incremented to 2.
Now it is checked if i <= n  i.e if 2 <= 5 and the condition is met. We go inside the outer for loop.
Loop2 is again executed where j becomes 1 and 1 <= 2, so the condition is met and we go inside the 
inner for loop and a star is printed. We again move to the start of inner for loop where where j++
happens and j becomes 2. Now, 2 <= 2 condition is also met, so a star is again printed. Now we again
move to loop2 for j++ operation and j becomes 3. 3 <= 2 condition is not met so we come out of the 
loop and go to the last instruction of outer for loop which brings cursor to new line. After this, we
go back to outer for loop where i++ happens and i = 3. 3 <= 5 so we go inside outer for loop and
loop2 runs. j again starts from 1 and 1 <= 3 so, the condition is met. This time j runs 3 times 
before the control comes out of that loop2.

    *
    * *         ----> upto the point where note has been writtwn
    * * *

*/


#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout<<"Enter the number of levels: ";
    cin>>n;
    for(int i=0; i<=n; i++){  // loop1

        for(int j=1; j<=i; j++){  // loop2

            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
