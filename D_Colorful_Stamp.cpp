/* Priyanshu Vaishnav */
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string.h>
#include<vector>
#include<cstring>
using namespace std;

signed main()
{

    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> index;
        index.push_back(-1);
        int i=0;
        string w(n, 'W');
        if(s==w)
        {
            cout<<"YES"<<endl;
            continue;
        }
        for ( i = 0; i < s.length(); i++)
        {
            if (s[i] == 'W')
                index.push_back(i);
        }
        if (s[i-1] != 'W')
        {
            index.push_back(i);
        }

        int flag=0;
        for( i=0;i<index.size()-1;i++)
        {
            int start=index[i];
            int end=index[i+1];
            int r=0;
            int b=0;
            for(int j=start+1;j<end;j++)
            {
                if(s[j]=='R')
                {
                    r++;
                }
                else{
                    b++;
                }
            }
            if(r==0 || b==0)
            {
                flag=1;
                break;
            }
            
        }
        if(flag==1)
        {
             cout<<"NO"<<endl;
        }
        else{
              cout<<"YES"<<endl;
        }
        

    }
    return 0;
}
