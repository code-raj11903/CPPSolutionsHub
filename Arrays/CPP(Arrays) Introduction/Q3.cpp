/*Given an integer array and its size, reverse the array and print it . Here 1<size<101*/
#include <iostream>
using namespace std;
int main()
{
    int n= 9; // size of an array
    int arr[] = {1,2,3,4,5,6,7,8,9}; // initialization of an arr of size 9
    int swap=0;
    for(int i=0; i<n/2;i++)
    {  swap = arr[i];
        arr[i]= arr[n-i-1];
        arr[n-i-1]= swap;


    }
    for (int ele: arr)
    {
        cout<<ele<<endl;
    }
  
}