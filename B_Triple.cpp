/* Priyanshu Vaishnav */
#include <iostream>
#include <unordered_map>
using namespace std;

signed main()
{

    int t = 1;
    cin >> t;
    while (t--)
    {
        int cnt=0;
        unordered_map<int, int>mp;
        int a;
        cin>>a;
        for(int i=0;i<a;i++)
        {
            int x;
            cin>>x;
            mp[x]++;
        }
        for(auto i:mp)
        {
            if(i.second>=3)
            {
                cnt++;
                cout<<i.first<<endl;
                break;
            }
            
        }
        if(cnt==0)
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}