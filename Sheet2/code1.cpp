#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int j,k;
    k = 1;
    for (int i =1;i<=n;i++)
    {
        for (int j =1;j<=n;j++)
        {
            if (j <= k || j >= n - k + 1)
            {
                cout << j;
            }
            else
            {
                cout << " ";
            }
        }
        if (i <= n / 2)
            k++;
        else
            k--;
        cout << "\n";
    }
    return 0;
}