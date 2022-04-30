/* Priyanshu Vaishnav */
#include <bits/stdc++.h>
using namespace std;

string getString(char x)
{
    // string class has a constructor
    // that allows us to specify size of
    // string as first parameter and character
    // to be filled in given size as second
    // parameter.
    string s(1, x);
 
    return s;  
}

int main()
{
    int t = 1;
    cin >> t;
    int cnt = 0;
    while (t--)
    {
        string s;
        cnt++;
        cin >> s;
        int size = s.length();
        int flag = 0;
        for (int i = 0; i < size; i++)
        {
            if (s[i] < s[i + 1])
            {
                flag = 1;
            }
        }

        if (flag == 0)
        {
            cout << "Case #" << cnt << ": " << s << endl;
            continue;
        }
        int i=0;
        int rep=1;
        while (i < s.length()-1)
        {
            if(s[i]==s[i+1])
            {
                rep++;
                i++;
            }
            else if (s[i] < s[i + 1])
            {
               s.insert(s.begin() + i , rep , s[i]);
               i+=rep;
               i++;
               rep=1;
            }
            else{
                rep=1;
                i++;
            }
              
            
        }
        cout << "Case #" << cnt << ": " << s << endl;
    }
    return 0;
}