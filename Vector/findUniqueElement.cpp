#include <iostream>
#include <vector>

using namespace std;
int findUnique(vector <int> sol){
  int val =0; 
  for(int ele: sol){
    val = val^ele;
  }
  return val;

}
int main() {
  // cout << "Hello world!" << endl;
  // vector<int> vec;
  // cout<<sizeof(vec)/sizeof(int) ; // output compiler dependent 
  int n ;
  cin>>n;
  vector<int> vec(n);
  for(int &ele: vec){
    cin>>ele;
  }

 int UniqueElememt = findUnique(vec);
 cout<<"Unique Elememt is "<<UniqueElememt<<endl;
  return 0;
}