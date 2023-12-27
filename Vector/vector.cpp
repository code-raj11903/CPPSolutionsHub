#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;// vector declaration
 
 cout<<"capacity "<<v.capacity()<<endl;
 cout<<"size "<<v.size()<<endl;
 v.push_back(10);
 cout<<"capacity "<<v.capacity()<<endl;
 cout<<"size "<<v.size()<<endl;
 v.push_back(20);
 cout<<"capacity "<<v.capacity()<<endl;
 cout<<"size "<<v.size()<<endl;
 v.push_back(30);
 cout<<"capacity "<<v.capacity()<<endl;
 cout<<"size "<<v.size()<<endl;
 v.push_back(40);
 cout<<"capacity "<<v.capacity()<<endl;
 cout<<"size "<<v.size()<<endl;

 v.pop_back();// last element pop back
 cout<<"capacity "<<v.capacity()<<endl;
 cout<<"size "<<v.size()<<endl;
 // front element 
 cout<<"front "<<v.front()<<endl;

 // back element 
 cout<<"back "<<v.back()<<endl;

for (int i:v)
{ cout <<i<<" ";}
cout<<endl;

 

    return 0;
}