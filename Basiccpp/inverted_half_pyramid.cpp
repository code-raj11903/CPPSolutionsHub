#include <iostream>
using namespace std;
int main()
{
// invered half pyramid
    int n;
    cin>>n;
    for (int row= 0 ; row<n; row++)
    {
        for (int col= 0 ; col<n-row; col++)
        {
            cout<<"*";
        }cout<<endl;
    }

    /*inverted half pyramid 
12345
1234
123
12
1
*/
    for (int row= 0 ; row<n; row++)
    {
        for (int col= 0 ; col<n-row; col++)
        {
            cout<<col+1;
        }cout<<endl;
    }

   /* full pyramid
   */
    for (int row= 0 ; row<n; row++)
    {
        for (int col= 0 ; col<n-row-1; col++)
        {
            cout<< " ";
        }
        for (int col= 0 ; col<row+1; col++)
        {
            cout<<"* ";
        }
                    cout<<endl;

    }
  
    return 0;
}


