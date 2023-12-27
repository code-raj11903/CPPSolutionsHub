/*Given an array containing n distinct integers in the range [0,n] (inclusive of both 0 and n) (inclusive of
both 0 and n). Find and return the only number of the range that is not present in the array. Here 1<n<101.*/
#include <iostream>
using namespace std;
int main()
{
    int n; // size of an array
    cin>>n;
    int arr[n] ;// decalratoion of an arr of size n+1 rnage [0,n]
    for(int &ele:arr)
    {
        cin>>ele;
    }
    int flag=0;
    int count=0;
    for (int i=0;i <=n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr[j]!=i)
            {
                flag= 1;
                count= i;
            } 
            else
            {
                flag = 0;
                break;
            }
            
        }
        if (flag)
        {
            cout<<"the only number of the range that is not present in the array "<<count<<endl;
            break;
        }
    }
return 0;
}