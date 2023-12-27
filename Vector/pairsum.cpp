#include <iostream>
#include <vector>
using namespace std;
int main()
{ int n;
cout<<"Enter the no. of elements";
cin>>n;
    vector<int> arr(n);
    cout<<"Enter elements: ";
    for(int i=0; i<arr.size(); i++)
    {
        cin>>arr[i];
    }
    int sum; 
    cout<<"Enter sum ";
    cin>>sum;
    for(int i=0; i<arr.size();i++)
    {
        for(int j=i+1; j<arr.size();j++)
        {
            if((arr[i]+arr[j])== sum){cout<<"pair: "<<arr[i]<<" ,"<<arr[j]<<endl;}
        
    }}
    // for(int i=0; i<arr.size(); i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
  
    return 0; 

}