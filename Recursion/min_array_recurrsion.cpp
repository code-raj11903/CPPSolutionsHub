#include <iostream>
#include <limits.h>
void findmin(int arr[] ,int n , int i , int& mini){
    if(i>=n){
        return;
    }

    if(arr[i] <=mini)
    {
     mini = arr[i];
    }

    findmin(arr, n,i+1, mini);
 
}
using namespace std;
int main()
{ int arr[]= {
    0,1,2,-1,-3,9,-5,-70,5,4,64,44,6,4954644
};
int n = 14;
int i =0; 
int mini = INT16_MAX;
findmin(arr, n,i, mini);
cout<< mini;
    return 0;
}