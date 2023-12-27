#include <iostream>
using namespace std;
int binarysearch(int key,int arr[],int size){
    int s=0;
    int e = size -1;
    int mid = s+ (e-s)/2;
    while(s<=e)
    {
        if(arr[mid]== key)
        {
            return mid;
        }
        else if( arr[mid]>key)
        {
            e= mid-1;
        }
        else{
            s= mid+1;
        }
        mid = s+ (e-s)/2;

    }
    return -1;
}
int main()
{
    int n;
    cout<<"No. of elements "<<endl;
    cin>>n;
    int arr[n];
    for(int i =0; i<n; i++)
    {
        cin>>arr[i];
    }
     int targetelement;
     cout<<"Target element "<<endl;
     cin>>targetelement;
    cout<<"The index of target elemnet: "<<binarysearch(targetelement,arr, n)<<endl;


    return 0;
}