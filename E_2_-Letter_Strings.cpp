/* Priyanshu Vaishnav */
#include <iostream>
#include<vector>
using namespace std;

#define ll long long
signed main()
{

    int t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll cnt=0;
        vector<string>arr;
        for(ll i=0;i<n;i++)
        {
            string x;
            cin>>x;
            arr.push_back(x);
        }
        for(ll i=0;i<n-1;i++)
        {
           for(ll j=i+1;j<n;j++)
           {
                 if(arr[i]!=arr[j] and i<j)
                 {
                      if(arr[i][0]==arr[j][0]  || arr[i][1]==arr[j][1])
                      {
                          cnt++;
                      }
                 }  
             
           }
        }
        cout<<cnt<<endl;
    }
    return 0;
}