// method 1 
// L To  R 
#include <bits/stdc++.h>
using  namespace std;
void  lastOccurence(string &str, char &key , int i , int &n , int &ans){
    if(i>=n) return;
    if(str[i]== key) ans =i;
    lastOccurence(str, key, i+1, n, ans);
}

int main(){
    string str;
    cout<<"Enter String"<<endl;
     cin>> str;
    cout<<"Key"<<endl;
     char key;
     cin>>key;
     int index = 0, ans = INT16_MIN,n = str.length(); 
    lastOccurence(str, key, index, n, ans);
    cout<<ans<<endl;
}
 