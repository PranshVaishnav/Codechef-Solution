/* Priyanshu Vaishnav */
#include <iostream>
#include<algorithm>

using namespace std;

signed main()
{

    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        int m;
        cin>>n>>m;
        if(n==1 and m==1)
        {
            cout<<0<<endl;
        }
        else if(n==1 and m-n>1)
        {
            cout<<-1<<endl;
        }
        else if(m==1 and n-m>1)
        {
            cout<<-1<<endl;
        }
        else 
        {
            int x=n-1;
            int y=m-1;
            int extra=0;
            int z=max(x,y);
            
            if(z==x)
            {
              z=z-m;
            }
            else{
              z=z-n;
            }
            if((x%2==1 and y%2==1) || (x%2==0 and y%2==0) )
            {
                z++;
            }
            
            cout<<x+y+z<<endl;
        }
    }
    return 0;
}