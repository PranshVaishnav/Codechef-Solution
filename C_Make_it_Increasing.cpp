/* Priyanshu Vaishnav */

//Look into it 
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define int long long
signed main()
{

    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>arr;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            arr.push_back(x);
        } 
        int maximum=*max_element(arr.begin().arr.end());
      
        
        
    }
    return 0;
}