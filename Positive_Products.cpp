/* Priyanshu Vaishnav */
#include <bits/stdc++.h>
using namespace std;


long long int nCr(long long int n)
{
    return (n*n-1)/2;
}

signed main()
{

    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cout << fixed << setprecision(12);
    int t = 1;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        vector<int> arr;
        int pos=0;
        int neg=0;
        for (int i = 0; i < n; i++)
        {
            int y;
            cin >> y;
            if(y>0)pos++;
            if(y<0) neg++;
            arr.push_back(y);
        }
        long long int a=nCr(pos);
        long long int b=nCr(neg);
        cout<<a+b<<endl;
    }
    return 0;
}