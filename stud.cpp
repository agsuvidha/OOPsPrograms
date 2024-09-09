#include <iostream>
using namespace std;
void createMatrix(int ar[][10],int m, int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>ar[i][j];
        }
    }
}
void printMatrix(int arr[][10],int m, int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}
int main() 
{
    int m,n;
    int arr[10][10];
    cout<<"Enter number of rows"<<endl;
    cin>>m;
    cout<<"Enter Number of colums"<<endl;
    cin>>n;

    createMatrix(arr,m,n);
    printMatrix(arr,m,n);
    return 0;
}