#include<bits/stdc++.h>
using namespace std;

int diff(string s1, string s2, int m)
{
    int res = 0;
    for(int i = 0; i < m; i++)
    {
        res += abs(s1[i] - s2[i]);
    }
    return res;
}

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int n,m;
        cin>>n>>m;

        vector<string> arr(n);
        for(int i = 0; i < n; i++) cin>>arr[i];

        sort(arr.begin(), arr.end());

        int mn = INT_MAX;
        for(int i = 0; i < n; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                int res = diff(arr[i], arr[j], m);
                mn = min(mn, res);
            }
        }

        cout<<mn<<"\n";
    }

    return 0;
}