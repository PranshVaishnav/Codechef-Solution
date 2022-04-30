/* Priyanshu Vaishnav */
#include <bits/stdc++.h>
using namespace std;

signed main()
{

    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cout << fixed << setprecision(12);
    int t = 1;
    cin >> t;
    int l = 0;
    while (t--)
    {
        l++;
        int n;
        cin >> n;
        deque<int> dq;
        int min = 0;
        for (int i = 0; i < n; i++)
        {
            int z;
            cin >> z;
            dq.push_back(z);
        }
        int cnt = 0;
        while (dq.size() != 0)
        {
            if (dq.front() <= dq.back())
            {
                if (dq.front() >= min)
                {
                    min = dq.front();
                    dq.pop_front();
                    cnt++;
                }
                else
                {
                    dq.pop_front();
                }
            }
            else
            {
                if (dq.back() >= min)
                {
                    min = dq.back();
                    dq.pop_back();
                    cnt++;
                }
                else
                {
                    dq.pop_back();
                }
            }
        }
        cout << "Case #" << l << ": " << cnt << endl;
    }
    return 0;
}