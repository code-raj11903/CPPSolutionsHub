#include <iostream>
#include <cstring> // for memset function

using namespace std;
void solve(int arr[], int size){
  for(int i =0 ; i <size; i++){
    arr[i]+=10;
    cout<<arr[i]<< " " ;
  }
  cout<<endl;
}
int main() {
  cout << "Hello world!" << endl;
  int arr[] = {1,2,3,4};
  int size =5;
  //  cout<<"calling solve function"<<endl;
  // solve(arr, 5);
  //   cout<<"over solve function"<<endl;
  //  for(int i =0 ; i <size; i++){
  //   cout<<arr[i]<< " " ;
  // }
  cout<< sizeof(arr)<<endl;
  cout<< sizeof(arr)/sizeof(arr[0])<<endl;
 

 // using memset function
cout<<"Replaced with 0 "<<endl;
memset(arr, 0, sizeof(arr));
for(int i =0 ; i <size; i++){
    
    cout<<arr[i]<< " " ;
  }  cout<<endl;

memset(arr, 0, sizeof(arr));// works with 0 and -1
for(int i =0 ; i <size; i++){
    
    cout<<arr[i]<< " " ;
  }
  cout<<endl;
  cout<<"Replaced with 1 "<<endl;
memset(arr, 1, sizeof(arr));  // not work
for(int i =0 ; i <size; i++){
    
    cout<<arr[i]<< " " ;
  }



  return 0;
}