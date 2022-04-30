/* Priyanshu Vaishnav */
#include <bits/stdc++.h>
using namespace std;

void swap(char *x, char *y)
{
    char temp = *x;
    *x = *y;
    *y = temp;
}

signed main()
{

    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cout << fixed << setprecision(12);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int flag = 0;
        int x;
        int y;
        cin >> x;
        cin >> y;
        string a = "";
        string b = "";
        int n = x + y;
        if (x % 2 == 1 and y % 2 == 1)
        {
            cout << -1 << endl;
            continue;
        }
        else if (x == 1 or y == 1)
        {
            cout << -1 << endl;
            continue;
        }
        else if (x % 2 == 0 and y % 2 == 0)
        {
            a.append(x / 2, 'a');
            a.append(y, 'b');
            a.append(x / 2, 'a');
            b.append(y / 2, 'b');
            b.append(x, 'a');
            b.append(y / 2, 'b');
        }
        else if (x % 2 == 0 and y % 2 == 1)
        {
            a.append(x / 2, 'a');
            a.append(y, 'b');
            a.append(x / 2, 'a');

            b.append(y / 2, 'b');
            b.append(x / 2, 'a');
            b.append(1, 'b');
            b.append(x / 2, 'a');
            b.append(y / 2, 'b');
        }
        else if (x % 2 == 1 and y % 2 == 0)
        {
            a.append(y / 2, 'b');
            a.append(x, 'a');
            a.append(y / 2, 'b');

            b.append(x / 2, 'a');
            b.append(y / 2, 'b');
            b.append(1, 'a');
            b.append(y / 2, 'b');
            b.append(x / 2, 'a');
        }
        cout << a << endl;
        cout << b << endl;
    }
    return 0;
}