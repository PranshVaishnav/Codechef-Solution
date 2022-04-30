/* Priyanshu Vaishnav */
#include <bits/stdc++.h>
using namespace std;

#define PI 3.1415926535
#define int long long

signed main()
{

    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cout << fixed << setprecision(6);
    int t = 1;
    cin >> t;
    int x=0;
    while (t--)
    {
        // R*A/B
         x++;
        int r;
        int a;
        int b;
        cin >> r >> a >> b;
        vector<int> arr;
        arr.push_back(r);

        while (r != 0)
        {
            r = (r * a) ;
            arr.push_back(r);
            r=r/ b;
            arr.push_back(r);
        }
        int sum = 0;
        
        for (int i = 0; i < arr.size(); i++)
        {
            arr[i] = arr[i] * arr[i];
            sum += arr[i];
        }
        cout<<"Case #"<<x<<": "<<sum*PI<<endl;

    }
    return 0;
}