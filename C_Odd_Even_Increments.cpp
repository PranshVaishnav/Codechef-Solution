/* Priyanshu Vaishnav */
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

#define ll long long 

signed main()
{

    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin>>n;
        vector<ll> arr;
        for(ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            arr.push_back(x);
        }
        int even=0;int odd=0;
        int even_2=0;int odd_2=0;
        for(int i=0;i<n;i+=2)
        {
            if(arr[i]%2==0)
               even++;
            else
            odd++;
        }
        for(int i=1;i<n;i+=2)
        {
            if(arr[i]%2==0)
            even_2++;
            else
            odd_2++;
        }
        if(even==0 || odd==0)
        {
            if(even_2==0|| odd_2==0)
            {
                cout<<"YES"<<endl;
                continue;
            }
            else{
                cout<<"NO"<<endl;
                continue;
            }
        }
        else{
            cout<<"NO"<<endl;
            continue;
        }

    }
    return 0;
}