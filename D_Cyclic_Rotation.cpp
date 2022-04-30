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
        cin >> n;
        vector<int> a;
        vector<int> b;
        vector<int>c;
        for (int i = 0; i < n; i++)
        {
            int z;
            cin >> z;
            a.push_back(z);
        }
        for (int i = 0; i < n; i++)
        {
            int z;
            cin >> z;
            b.push_back(z);
        }
        int i=0;
        while(i<n)
        {
            if(b[i]!=a[i])
            {
                int j=i;
                while(a[j+1]==a[i])
            }
        }
    }
    return 0;
}