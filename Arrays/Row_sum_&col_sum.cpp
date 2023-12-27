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
    // cout<<"Hello World";//
    int n; 
    cin>>n;
    int arr[n][n];
    int sum =0;
    for (int i =0; i<n;i++)
    {
        for(int j=0; j<n;  j++)
        {
            cin>>arr[i][j];
        }
    }
    for (int i =0; i<n;i++)
    {
        for(int j=0; j<n;  j++)
        {
         sum+=arr[i][j];
        }
         cout<<"sum"<<i<<sum;
         sum =0;
    }
    
    cout<<"column wise sum "<<endl;
     for (int i =0; i<n;i++)
    {
        for(int j=0; j<n;  j++)
        {
         sum+=arr[j][i];
        }
         cout<<"sum"<<sum;
         sum =0;
    }
    return 0;
}