#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> sort(vector<int>arr)
{
int start = 0 , end = arr.size()-1;
  int i =0 ; 
  while(i!=end)
  {
    if(arr[i]==0)
    {
      swap(arr[i], arr[start]);
          i++;
          start++;
    }
    else {
            swap( arr[end], arr[i]);
            end--;
    }

  } 
      for(int i =0; i<arr.size();i++)
 {
    cout<<arr[i]<< " ";
 }
 cout<<endl;
 return arr;
}

int main()
{ int n;
cout<<"Enter the no. of elements";
cin>>n;
    vector<int> arr(n);
    cout<<"Enter elements: ";
    for(int i=0; i<arr.size(); i++)
    {cin>>arr[i];
    }
  
    sort(arr);
   // builtin use kr ke 
//    sort(arr.begin(),arr.end());
    for(int i =0; i<arr.size();i++)
 {
    cout<<arr[i]<< " ";
 }
 cout<<endl;
    return 0; 

}