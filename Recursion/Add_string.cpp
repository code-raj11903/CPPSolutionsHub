/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;
void addstring(string& num1,string& num2, int size1, int size2,     int carry  ,string &ans){
    if(size1<0 && size2<0 )
    { if(carry !=0) ans+=(carry+'0');
        return;}
    
    int n1 =  (size1>=0 ? num1[size1] : '0')-'0'; 
    int n2 =  (size2>=0 ? num2[size2] : '0')- '0'; 
    int sum = n1 +n2+ carry;
    int digit = sum %10;
    carry = sum/10;

    ans.push_back( digit +'0');
   size1-=1;
   size2-=1;

    addstring( num1, num2,size1,size2,carry, ans); 

}
int main()
{
      string num1;
    string num2;
    cin>>num1;
    cin>>num2;
          int size1= num1.length()-1;
    int size2= num2.length()-1;
         int carry ;
         string ans="" ;
        
 addstring( num1,num2,size1,size2,0,ans);
 reverse(ans.begin(), ans.end());
 cout<< ans<<endl;
    return 0;
}