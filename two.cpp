#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        if(n<2)
        {
            cout<<"invalid"<<endl;
            continue;
        }   
        int max=INT32_MIN,maxd=INT32_MIN;
        for(i=0;i<n;i++)
        {
            if(arr[i]>max) max=arr[i];
        }
        for(i=0;i<n;i++)
        {
            if(arr[i]>maxd && arr[i] != max) maxd = arr[i];
        }

        if(maxd == INT32_MIN) cout<<"No 2nd largest element"<<endl;
        else cout<<"***"<<maxd<<endl;
    }
}