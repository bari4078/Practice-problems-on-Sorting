#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int i,n=str.size();
    int arr[26]={0};
    for(i=0;i<n;i++)
    {
        arr[str[i]-'a']++;
    }

    bool is_anagram = true;
    for(i=0;i<26;i++)
    {
        if(arr[i] %2 != 0 && arr[i] !=0 ) is_anagram=false;
    }
    if(is_anagram)
    {
        string ana1,ana2;
        int one_size=0,two_size=0;
        for(i=0;i<n;i++)
        {
            if(str[i] == 'A') continue;
            ana1.push_back(str[i]);
            for(int j=i+1;j<n;j++)
            {
                if(str[j] == str[i])
                {
                    ana2.push_back(str[j]);
                    str[j] = 'A';
                    break;
                }
            }
        reverse(ana2.begin(),ana2.end());
        }
        cout<<"YES"<<endl;
        cout<<ana1<<endl;
        cout<<ana2<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}