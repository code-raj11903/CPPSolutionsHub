/*Given an integer array and its size, find the sum of the greatest and the smallest integer present
in the array. Here 1< size <101*/
#include <iostream>
using namespace std;
int main()
{
    int n= 9; // size of an array
    int arr[] = {12,2,3,4,15,6,7,8,9}; // initialization of an arr of size 9
//    let max is a[0]
int max = arr[0];
int min = arr[0];
    for (int ele: arr)
    {
        if (ele>max)
        {
            max= ele;
        }
        if (ele<min)
        {
            min  = ele; 
        }
    }
    cout<<"sum of the greatest and the smallest integer present in the array->> "<< min+ max<<endl;
}