#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> nums={19,12,23,8,16};
    int n=nums.size();
    vector <bool> is_visited(n,false);
    
    int i,j;
    for(i=0;i<n;i++)
    {
        int min=INT32_MAX,min_idx;
        for(j=0;j<n;j++)
        {
            if(nums[j]<min && is_visited[j]!=true)
            {
                min = nums[j];
                min_idx=j;
            }
        }
        is_visited[min_idx] = true;
        nums[min_idx] = i;  
    }

    for(int ele:nums)
    {
        cout<<ele<<" ";
    }
}