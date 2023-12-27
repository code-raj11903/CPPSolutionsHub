/*Q1 - Given an integer array(arr) and its size(n), print the count of odd and even integers present in the array.*/

#include <iostream>
using namespace std;
int main()
{
    int n; // size of an array
    cin>>n;
    int arr[n]; // declaration of an arr of size n 
int evencount=0;// you can use this only odd count = n- evencount
//int odd count=0; 
    //using for loop to enteer the values of an arr
    for (int i = 0 ; i<n;i++ )
    {
        cin>>arr[n];

        if(arr[i]%2==0)
        {
            evencount++;
        }
    }

     cout<<"even count->"<<evencount<<endl;
     cout<<"odd count->"<<n-evencount<<endl;
    // using  for each loop to print
 evencount=0;// you can use this only odd count = n- evencount

    for(int ele:arr)
    {
        if (ele%2==0)
        {
            evencount++;
        }
    }
     cout<<"even count->"<<evencount<<endl;
     cout<<"odd count->"<<n-evencount<<endl;
}