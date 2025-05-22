#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int firstMissingPositive(vector<int>& nums) {
            int miss=-1;
            sort(nums.begin(),nums.end());
            int n = nums.size();
            int low=0,high = n-1,mid;
            while(low<=high){
                mid=(high+low)/2;
                if(mid == nums[mid])
                {
                    low = mid+1;
                }
                else if(mid != nums[mid])
                {
                    miss = mid;
                    high = mid-1;
                }
            }
            return miss;
        }
    };
int main()
{
    vector <int> g,s;
    int g_size,s_size;
    cout<<"size: ";
    cin>>g_size;
    int i,t;
    for(i=0;i<g_size;i++)
    {
        int temp;
        cin>>temp;
        g.push_back(temp);
    }
    //cout<<"T: ";
    //cin>>t;
    Solution ob;
    int out = ob.firstMissingPositive(g);
    cout<<"(("<<out<<endl;
    return 0;
}