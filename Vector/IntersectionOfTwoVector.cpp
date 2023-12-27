#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main() {

  vector<int> vec;

// intersection
vector<int> arr = {1,2,3};
vector<int> brr = {4,5,3,2,6};

for( int i = 0; i <arr.size(); i++)
{//  O(n)
  int ele = arr[i];
    for( int j = 0; j <brr.size(); j++)
    {//  O(n)
       if( ele==brr[j]){
        // mark
         brr[j]=INT_MIN;
        vec.push_back(arr[i]);
       }
    }
}
for(int ele: vec){
  cout<<ele<<" " ;
}
cout<<endl;
  return 0;
}