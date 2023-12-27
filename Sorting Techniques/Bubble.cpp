#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> arr)
    {  cout<< "Sorted Array with bubble Sort: " ;
        for(int i =0 ; i<arr.size(); i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

int main()
{ 
    vector<int> arr{5, 8, 4,2,1,7,6};
    //Bubble Sort
    for(int i =0; i<arr.size()-1; i++)
    { bool swapped = false;
     for(int j= 0; j<arr.size()-i-1; j++)
     {
       if(arr[j]>arr[j+1])
        {  swapped = true;
              // int temp = arr[j];   /*swappping*/
        // arr[j]= arr[j+1];
        // arr[j+1]= temp;
           swap(arr[j], arr[j+1]);
        }
     }
     if(swapped == false)
        {// Sorting is completed.
            break;
        }
    } 
    
 

    print(arr);

    return 0;

}

