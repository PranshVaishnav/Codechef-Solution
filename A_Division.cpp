/* Priyanshu Vaishnav */
#include <iostream>
using namespace std;


signed main()
{

    int t = 1;
    cin >> t;
    while (t--)
    {
        int a;
        cin>>a;
        if(a<=1399)
        {
            cout<<"Division 4"<<endl;
        }
        else if(a>=1400 and a<=1599)
        {
cout<<"Division 3"<<endl;
        }
        else if(a>=1600 and a<=1899)
        {
cout<<"Division 2"<<endl;
        }
        else{
cout<<"Division 1"<<endl;
        }
    }
    return 0;
}