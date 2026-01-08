#include <bits/stdc++.h>
using namespace std;

void merge(vector <int> &arr, int start, int mid, int end)
{
    int i,j;
    int n1= mid-start+1;
    int n2 = end-mid;

    vector <int> left(n1),right(n2);
    for(i=0;i<n1;i++)
    {
        left[i]=arr[start+i];
    }
    for(i=0;i<n2;i++)
    {
        right[i]=arr[mid+1+i];
    }
    i=0,j=0;
    int k=start;
    while(i<n1 && j<n2)
    {
        if(left[i]<= right[j])
        {
            arr[k++]=left[i++];
        }
        else
        {
            arr[k++]=right[j++];
        }
    }
    while(i<n1){
        arr[k++]=left[i++];
    }
    while(j<n2){
        arr[k++]=right[j++];
    }
}

void merge_sort(vector <int> &v,int start,int end)
{
    if(start<end)
    {
        int mid=(start+end)/2;
        merge_sort(v,start,mid);
        merge_sort(v,mid+1,end);
        merge(v,start,mid,end);
    }
    return;
}

int main()
{
    vector <int> v = {10,20,3,40,45,67,54,23,43,123,543,2,43};
    int n = v.size()-1;
    merge_sort(v,0,n);
    for(int ele: v)
    {
        cout<<ele<<" ";
    }
    return 0;
}