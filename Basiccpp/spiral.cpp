/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int n; 
    cin>>n;
    int a[n][n];
   
    int count = n*n;
    int sc=0,sr=0;
    int ec=n-1,er=n-1;
    for(int i =0 ; i< n; i++)
{
    for (int j =0 ; j<n; j++)
    {
        a[i][j]=0;
    }
}
    while (count>0)

{
    for(int i=sc; count > 0&&i<=ec ; i++)
    { 
        a[sr][i]= count;
        count --;
    }
    sr++;
    for(int i=sr; count >0&& i<=er; i++)
    {
        a[i][ec]= count;
        count --;
    }
    ec--;
    for(int i=ec; count >0&& i>=sc; i--)
    {
        a[er][i]= count;
        count --;
    }
    er--;
    for(int i=er; i>=sr &&count >0; i--)
    {
        a[i][sc]= count;
        count --;
    }
    sc++;
    
}    
for(int i =0 ; i< n; i++)
{
    for (int j =0 ; j<n; j++)
    {
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}
    

    return 0;
}