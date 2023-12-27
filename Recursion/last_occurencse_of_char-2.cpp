// method 2
//   R  To L
#include <bits/stdc++.h>
using  namespace std;
void  lastOccurence(string &str, char &key , int i  , int & ans){

    if(i<0) return;
    if(str[i]== key) {
    ans =i;
    return;}
    lastOccurence(str, key, i-1, ans);
}

int main(){
    string str;
    cout<<"Enter String"<<endl;
     cin>> str;
    cout<<"Key"<<endl;
     char key;
     cin>>key;
     int n = str.length();
     int index = n-1, ans = INT16_MIN; 
    lastOccurence(str, key, index, ans);
    cout<<ans<<endl;
}
 