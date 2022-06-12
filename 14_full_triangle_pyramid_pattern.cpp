/*
     *
    * *
   * * *     -----> pyramid pattern
  * * * *
 * * * * * 

We have 5 rows and at every row number of stars is incrementing and between each symbol there's a
space which is ultimately making this pattern a full triangle otherwise it would be a half pyramid.
In loop1, i=1 and 1 <= 5 so we move inside loop1 where in loop2, k=4 and 4>0 so a space will be printed
until j becomes 0. (j-- happens and ultimately 0 < 0 will not be satisfied). Control comes out of the 
loop2 and we go to loop3 where j=1 and 1 <= 1, therefore a star and a space is printed once and after
that control comes out of the loop because j becomes 2. Cursor moves to a newline. Control goes to loop1
and i++ happens. i becomes 2 and 2 <= 5 and we again go inside loop2 and this time 3 spaces are printed
.

Same process executes until 5 rows are completed.



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

            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}