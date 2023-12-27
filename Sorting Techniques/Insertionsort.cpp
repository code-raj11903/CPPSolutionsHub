#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> arr)
    {  cout<< "Sorted Array with Insertion Sort: " ;
        for(int i =0 ; i<arr.size(); i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

int main()
{ 
    vector<int> arr{5, 8, 4,2,1,7,6};
    //Insertion Sort
    for(int i =1; i<arr.size(); i++)
    {  // fetch
    int val = arr[i];
    //compare
    int j;
     for(j= i-1; j>=0; j++)
     { if(arr[j]>val)
        {
            //shift
            arr[j+1]= arr[j];
        }
        else{//No need of Shifting
            break;
        }
     }// inner loop ends
    
    //copy

    arr[j+1]= val;
    } //OUter loop ends
    print(arr);

    return 0;

}

