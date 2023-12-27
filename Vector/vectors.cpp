#include <iostream>
#include <bits/stdc++.h>
//#include <vector>
using namespace std;
int main()
{ vector<int>v = {1,4,5,7,5};
vector<int>  v1(4);
 cout<<v[2]<<endl;
 cout<<v.size()<<endl;
 v.clear();
 cout<<v.capacity()<<endl;
 v.erase(v.begin()+1);
 v.insert(v.end(), 12);
 sort(v.begin(), v.end());// incresing
 sort(v.begin()+1, v.end(),greater())// 




    return 0;
}