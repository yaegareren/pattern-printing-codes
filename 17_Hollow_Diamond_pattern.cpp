/*

* * * * * * * * * *
* * * *     * * * *
* * *         * * *
* *             * *
*                 *    ------> middle line (upper half & lower half)
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * *

5 levels means a total of 10 rows. Pattern is divided into two halves and there are two for loops being used for each halve.



*/

#include<bits/stdc++.h>
using namespace std;
void hollowdiamond(int n);
int main()
{
  int num;
  cout<<"Enter the number of levels of the pattern : ";
  cin>>num;
  hollowdiamond(num);

 return 0;
}

void hollowdiamond(int n){

  for(int i=0; i<n; i++){        //first for loop prints out rows for the first halve

    for(int j=0; j<(2*n); j++){  //

      if(i+j<=n-1)   // upper left triangle
       cout<<"*";
      else
       cout<<" ";

      if((i+n)<=j)  // upper right triangle
       cout<<"*";
      else
       cout<<" ";
    }
    cout<<endl;
  }

  for(int i=0; i<n; i++){    //second for loop prints out rows for the second halve

    for(int j=0; j<(2*n); j++){

      if(i>=j)   // bottom left triangle
       cout<<"*";
      else
       cout<<" ";

      if(i>=(2*n-1)-j)  // bottom right triangle
       cout<<"*";
      else
       cout<<" ";
    }
    cout<<endl;
  }
}