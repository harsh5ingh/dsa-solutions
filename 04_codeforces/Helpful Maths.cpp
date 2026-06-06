#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;

    sort(s.begin(), s.end());

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '+')
        {
            cout << s[i];

            // check if any number still remains aheads
            for (int j = i + 1; j < s.length(); j++)
            {
                if (s[j] != '+')
                {
                    cout << "+";
                    break;
                }
            }
        }
    }

    return 0;
}