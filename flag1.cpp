#include<iostream>
using namespace std;
int main()
{
    int arr[10],num;
    cout<<"\nEnter values";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cout<<"\nEnter number to search\n";
    cin>>num;
    for(int i=0;i<10;i++)
    {
        if(arr[i]==num)
        {
            cout<<"\tFound\t";
        }
        else
        {
            cout<<"\tNot Found\t";
        }
    }
    return 0;
}