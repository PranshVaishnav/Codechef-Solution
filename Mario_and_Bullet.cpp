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
        int x;
        int y;
        int z;
        cin>>x>>y>>z;
        int time=y/x;
        if(z<time)
        {
            cout<<0<<endl;
        }
        else{
            cout<<z-time<<endl;
        }
            }
    return 0;
}