#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> arr)
    {  cout<< "Sorted Array with Selcetion Sort: " ;
        for(int i =0 ; i<arr.size(); i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

int main()
{ 
    vector<int> arr{5, 8, 4,2,1,7,6};
    //selection Sort
    for(int i =0; i<arr.size()-1; i++)
    { int index =i;
     for(int j= i+1; j<arr.size(); j++)
     {
       if(arr[j]<arr[index])
        {
          index = j;// index of min element 
        }
     }
        // int temp = arr[i];   /*swappping*/
        // arr[i]= arr[index];
        // arr[index]= temp;

        swap(arr[i], arr[index]);
    } 
    
 

    print(arr);

    return 0;

}

