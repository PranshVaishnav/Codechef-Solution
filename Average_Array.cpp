/* Priyanshu Vaishnav */
#include <bits/stdc++.h>
using namespace std;

void print(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    
}

signed main()
{

    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        int x;
        cin >> n;
        cin >> x;
        int get_sum = n * x;
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            arr.push_back(i + 1);
        }
        int z = n * (n + 1) / 2;
        if (get_sum == z)
        {
            print(arr, n);
           
        }
        else if (get_sum < z)
        {
            int y = z - get_sum;
            int row = y / n;

            int remaining = y - (row * n);
            for (int i = 0; i < n; i++)
            {
                if (i < remaining)
                {
                    arr[i]=arr[i]-row-1;
                }
                else
                {
                    arr[i] = arr[i] -row;
                }
            }
            print(arr, n);
            
        }
        else{
            int y = get_sum-z;
            int row = y / n;
            int remaining = y - (row * n);
            for (int i =n-1; i >=0; i--)
            {
                if (i > (n-remaining-1))
                {
                    arr[i]=arr[i]+row+1;
                }
                else
                {
                    arr[i] = arr[i]+row;
                }
            }
            print(arr, n);
        }
    }
    return 0;
}