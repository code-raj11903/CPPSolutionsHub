
#include <bits/stdc++.h>
using  namespace std;
void  ReverseString(string &str, int s , int e){
    if(s>=e) return;
    swap(str[s], str[e]);
    ReverseString(str,  s+1 , e-1);
}

int main(){
    string str;
    cout<<"Enter String"<<endl;
     cin>> str;
     int s = 0,n = str.length() , e = n-1; 
    ReverseString(str,  s , e);
    cout<<"Reveresed String "<<str<<endl;
}
 