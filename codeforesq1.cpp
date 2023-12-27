#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{ int t; 
    cin>>t;
    while(t--){
    string str;
    cin>>str;

    int count=0;
    if(str[0]=='3')
    {
        count++;
    }
    if(str[1]=='1' && str[0]=='3')
    {
        count++;
    }
    if(str[2]=='4'&&str[1]=='1' && str[0]=='3' )
    {
        count++;
    }
    if(str[3]=='1'&& str[2]=='4'&&str[1]=='1' && str[0]=='3' )
    {
        count++;
    }
    if(str[4]=='5' && str[3]=='1'&& str[2]=='4'&&str[1]=='1' && str[0]=='3')
    {
        count++;
    }
    if (count ==5)
    {
        count=str.length();
    }

     cout<<count<<endl;
    }

    return 0; 
}