#include <iostream>
#include <cmath>
using namespace std;

int decimalTobinary1(int n)
{ // division method

    int binaryno=0 ;
    int bit =0;
    int i =0;
    while (n>0)
    {
        bit= n%2;
        binaryno = (bit*pow(10,i++)) +binaryno ;
        n=n/2;
    }
return binaryno;
}
int decimalTobinary2(int n)
{ // bitwise method
    int binaryno=0 ;
    int bit =0;
    int i =0;
    while (n>0)
    {
        bit= n&1;
        binaryno = (bit*pow(10,i++)) +binaryno ;
        n=n>>1;
    }
return binaryno;
}
 int main()
 {
    int n;
    cin>>n;
    int binary =decimalTobinary1(n);
    cout<<binary<<endl;
    binary =decimalTobinary2(n);
    cout<<binary<<endl; 
    return 0;
 }
