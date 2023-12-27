/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
bool c(pair<int, int> p1, pair<int, int> p2) // c = comparator fuction
{
    
}



int main()
{
    int num_coordinates;
    cin>>num_coordinates;
    vector<pair<int, int>> v(num_coordinates);
    for(auto &i:v)                       // address beacuse 
    {
        cin>>i.first>>i.second;
    }
    sort(v.begin(), v.end(),c);
    for(auto i:v)
    {
        cout<<i.first;
    }
    

    return 0;
}