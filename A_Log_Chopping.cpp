/* Priyanshu Vaishnav */
#include <bits/stdc++.h>
using namespace std;

signed main()
{

    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cout << fixed << setprecision(12);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int cnt=0;
        vector<int>arr;
        for(int i=0;i<n;i++)
        {
            int z;
            cin>>z;
            arr.push_back(z);
        }
        for(int i=0;i<n;i++)
        {
               if(arr[i]%2==0)
               {
                   cnt+=arr[i]-1;
               }
               else{
                   cnt+=arr[i]-1;
               }
        }
        if(cnt%2==0)
        {
            cout<<"maomao90"<<endl; 
            
        }
        else{
            cout<<"errorgorn"<<endl;
        }
    }
    return 0;
}