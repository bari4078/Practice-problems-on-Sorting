#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int i,j,miss;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<=n;i++)
    {
        bool found = false;
        for(j=0;j<n;j++)
        {
            if(arr[j] == 2*i+1)
            {
                found = true;
                break;
            }
        }
        if(!found) miss = 2*i+1;
    }
    cout<<miss;
    return 0;
}