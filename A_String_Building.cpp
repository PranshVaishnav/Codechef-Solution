/* Priyanshu Vaishnav */
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        string a;
        cin>>a;
        int cnt=0;
        int flag=0;
        for(int i=0;i<a.length();i++)
        {
            if(a[i]==a[i+1])
            {  
               cnt++;
            }
            else{
                cnt++;
                if(cnt>=2)
                {
                     flag=0;
                }
                else{
                    flag=1;
                    break;
                }
                cnt=0;
            }
        }
        if(flag)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}