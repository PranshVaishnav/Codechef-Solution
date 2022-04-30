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
        string s;
        cin>>s;
        if(s.length()<2)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(s[0]=='B' || s[s.length()-1]=='A')
        {
            cout<<"NO"<<endl;
            continue;
        }
        int flag=0;
         int a=0;
         int b=0;

        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='B')
            {
                b++;
                if(a<b)
                {
                    flag=1;
                    break;
                }
            }
            else{
                a++;
            }
        }
        if(flag)
        {
            cout<<"NO"<<endl;
            continue;
        }
        else{
            cout<<"YES"<<endl;
            continue;
        }
    }
    return 0;
}