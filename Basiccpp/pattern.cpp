
/*  1
   232
  34543
 4567654
567898765*/

#include <iostream >
using namespace std;
int main()
{ 
int n; 
cin>>n;
//outer loop
for(int row =0 ; row <n; row ++)
{//spaces
    for(int col =0 ; col< n- row -1; col++)
    {
        cout<<" ";
    }
//numbers
    for(int col =0 ; col< row+1 ;col++)
    {
        cout<<col +row + 1;
    }
    //invesse number 
    int start = 2* row;
    for(int col =0 ; col< row ;col++)
    {
        cout<<start;
        start--;
    }
    cout<<endl;
}
    return 0;
}