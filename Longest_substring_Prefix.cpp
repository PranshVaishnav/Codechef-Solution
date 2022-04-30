/* Priyanshu Vaishnav */
#include <bits/stdc++.h>
using namespace std;

void print(vector<string> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

// Finding longest common prefix for the array of given string
signed main()
{

    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cout << fixed << setprecision(12);
    // The answer to this array of string will be "fl"as it common prefix for all the elements in the array.
    vector<string> arr = {"flight", "flow", "flight"};
    int n = arr.size();
    // Sort this array lexicographically-> letter by letter(dictionary format)
    //  After sorting compare the first and the last given string to get the common prefix elements in the array
    sort(arr.begin(), arr.end());
    // Printing the string of arary.

    string ans="";
    // comparing the common elements of first and last element in the array.
    for (int i = 0; i < min(arr[0].length(), arr[n - 1].length()); i++)
    {
        if (arr[0][i] == arr[n - 1][i])
        {
            ans=ans+ arr[0][i];
        }
        else{
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}