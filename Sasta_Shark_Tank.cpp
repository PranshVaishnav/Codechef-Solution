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
        int a;
        int b;
        cin>>a>>b;
        if(10*a==5*b)
        {
            cout<<"ANY"<<endl;
            continue;
        }
        else if(10*a>5*b){
            cout<<"FIRST"<<endl;
            continue;
        }
        else{
             cout<<"SECOND"<<endl;
            continue;
        }
    }
    return 0;
}