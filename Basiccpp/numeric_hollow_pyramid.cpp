


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
//numbers with spaces in between 
   int start =1;
    for(int col =0 ; col< 2*row +1; col++)
    { if (row==0 || row ==n-1)
    { 
     if (col%2== 0)
     {
        cout <<start;
        start++;
     }
    else 
    {
        cout<<" ";
    }
    }
    else{
        if(col==0)
    {
        cout<<"1";
    }
    else if (col == 2*row)
    {
        cout<<row+1;
    }
    else
    {
  cout <<" ";
    }
    }}
    cout<<endl;
}
    return 0;
}