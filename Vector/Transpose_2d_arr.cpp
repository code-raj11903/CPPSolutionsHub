#include <iostream>
using namespace std;
void trans(int arr[][10], int row, int col,int transpose[][10] )
{
    for(int i =0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            transpose[j][i]= arr[i][j];
        }
    }
}
void printarray(int arr[][10], int row, int col )
{
    for(int i =0; i<col; i++)
    {
        for(int j=0; j<row; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int row;
    int col;
    cin>>row>>col;
    int arr[row][10];
    int transpose[col][10];
    for(int i =0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    cout<<"Started transpose"<<endl;
    trans(arr, row, col, transpose);
    cout<<"Printing arrray"<<endl;
    printarray(transpose, row, col );

    return 0;

}