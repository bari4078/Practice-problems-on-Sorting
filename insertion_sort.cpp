#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** args)
{
    vector<int> arr;
    int n;
    cin>>n;
    int i,j,key;
    for(i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }

    for(i=0;i<n;i++)
    {
        key = arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key) //if previous element is bigger
        {
            arr[j+1]=arr[j];    //move it to the right
            j--;    //keep going right
        }
        arr[j+1]=key;   //found the place where the element 
    }                  //should be inserted so place it there

    for(int ele: arr)
    {
        cout<<ele<<" ";
    }
    return 0;
}