/* Priyanshu Vaishnav */
#include <bits/stdc++.h>
#include<vector>

using namespace std;

signed main()
{

    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int>arr;
        for (int i = 0; i < n; i++)
        {
            int z;
            cin >> z;
            arr.push_back(z);
        }
        int diff=0;
        for (int i = 0; i < n-1; i++)
        {
            diff+=arr[i+1]-arr[i]-1;
            if(diff<=2)
            {
            cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        
    }
    return 0;
}