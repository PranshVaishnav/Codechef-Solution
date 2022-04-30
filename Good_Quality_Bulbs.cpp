/* Priyanshu Vaishnav */
#include <bits/stdc++.h>
using namespace std;


signed main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int x;
        cin>>x;
        vector<int>arr;
        int sum=0;
        for(int i=0;i<n-1;i++)
        {
            int y;
            cin>>y;
            arr.push_back(y);
        }
        for(auto i:arr)
        {
            sum+=i;
        }
         int z=n*x;
        //  cout<<z<<endl;
         int ans=z-sum;
        //  cout<<ans<<endl;
        if(ans>0)
        {
            cout<<ans<<endl;
        }   
        else{
            cout<<0<<endl;
        }
        }
    return 0;
}