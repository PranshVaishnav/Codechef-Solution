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
        int n;
        cin>>n;
        vector<int>arr;
        for(int i=0;i<n;i++)
        {
            int z;
            cin>>z;
            arr.push_back(z);
        }
        int cnt =0;
         int start_index=-1;
         int end_index=-1;
         

         for(int i=0;i<n-1;i++)
         {
             if(arr[i]==arr[i+1])
             {
                 start_index=i; break;
             }
         }


         for(int i=0;i<n-1;i++)
         {
             if(arr[i]==arr[i+1])
             {
                 end_index=i+1; 
             }
         }
          if(start_index==-1)
         {
             cout<<0<<endl;
             continue;
         }


         int number_of_relation=end_index-start_index;
        
        if(number_of_relation==2)
        {
            cout<<1<<endl;
            continue;
        }
        if(number_of_relation==1)
        {
            cout<<0<<endl;
            continue;
        }
        else{
            cout<<number_of_relation-2<<endl;
        }

    }
    return 0;
}