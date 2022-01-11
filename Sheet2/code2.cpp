#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    //you need to print fibonacci series
    //we can store n*(n+1)/2 elements in an array
    int first =1;
    int second=1;
    int third=first+second;
    int k=n*(n+1)/2;
    int arr[k+1];
    arr[0]=first;
    arr[1]=second;
    for(int i = 2;i<=n*(n+1)/2;i++)
    {
        third=first+second;
        first=second;
        second=third;
        arr[i]=third;
    }
    int p=0;
    for(int i =1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<arr[p++]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}