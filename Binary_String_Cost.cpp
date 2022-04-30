/* Priyanshu Vaishnav */
#include <bits/stdc++.h>
using namespace std;

signed main()
{

ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
cout << fixed << setprecision(12);
int t = 1;
cin >> t;
while (t--) {

        int n;
        cin >> n;
        int x;
        int cnt_x=0;
        int cnt_y=0;
        int y;
        cin >> x;
        cin >> y;
        string a;
        cin >> a;
        int zero=0;
        int one=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]=='0')
            zero++;
            else
            one++;
        } 
        if(zero>0 && one>0)
        {
            cout<<min(x,y)<<endl;
        }
        else{
            cout<< 0<<endl;
        }
}
return 0;
}