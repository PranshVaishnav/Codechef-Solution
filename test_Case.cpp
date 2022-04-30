/* Priyanshu Vaishnav */
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cout << fixed << setprecision(12);
    int i = 10;
    int cnt=0;
    while (i < 2010)
    {
        cout<<i%10<<" "<<i/10<<endl;
        i++;
        cnt++;
    }
    cout<<cnt;
    return 0;
}