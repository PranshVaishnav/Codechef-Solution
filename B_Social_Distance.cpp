/* Priyanshu Vaishnav */
#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;

#define ll long long 
signed main()
{

    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        ll m;
        cin >> n >> m;
        vector<ll> arr;
        ll min_seats=0;
       
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin>>x;
            arr.push_back(x);
        }
         if(n>=m)
        {
            cout<<"NO"<<endl;
            continue;
        }
        min_seats+=n;
        sort(arr.begin(),arr.end(),greater<ll>());
        min_seats+=arr[0]*2;
        for(ll i=1;i<n;i++)
        {
            min_seats+=arr[i];
        }
        
        if(m>=(min_seats-arr[n-1]))
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }


    }
    return 0;
}