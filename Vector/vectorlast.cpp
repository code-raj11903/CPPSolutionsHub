#include <iostream>
#include <vector>
using namespace std;
int main()
{// last occurence  of an ele 
    
    int size;
    cin >> size;
    vector <int > v;
    int x;
    int count = 0 , occurence= 0;
    for(int i =0; i<size; i++)
    {
        cin>>v[i];
    }
    cout <<" Enter the element"<<endl;
     cin>>x;
    // from starting then last value is last occurence
    for(int i =0; i<v.size(); i++)
    {
        if(v[i]==x)
        {
            occurence = i;    
            count ++;   
        }
    }

cout<<" from starting "<< "occurence"<<occurence<<" no. of times"<<count;

    // from ending then first value is last occurence
    for(int i =v.size()-1; i<=0; i--)
    {
        if(v[i]==x)
        {
            occurence = i;    
            break;
            
        }
    }


cout<<" from ending "<< "occurence"<<occurence;
return  0;
}
