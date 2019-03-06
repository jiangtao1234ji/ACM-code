#include <iostream>
#include <algorithm>
#include <string>
#define maxn 10000

using namespace std;

string num[30] = {
    "one", "two", "three", "four", "five", "six", "seven",
    "eight", "nine", "ten", "eleven", "twelve", "thirteen",
    "fourteen", "fifteen", "sixteen", "seventeen", "eighteen",
    "nineteen", "twenty", "a", "both", "another", "first", "second", "third"};

int a[10];

int main()
{
    string s;
    int count = 0;
    for (int i = 0; i < 6; i++)
    {
        cin >> s;
        if (i == 5)
            if (s[s.length()] == '.')
                s.erase(s.end());
        for (int i = 0; i < 26; i++)
        {
            if (s == num[i])
            {
                if (i < 20)
                    a[count++] = (i + 1) * (i + 1) % 100;
                else
                {
                    if (i == 20 || i == 22 || i == 23)
                        a[count++] = 1;
                    else if (i == 21 || i == 24)
                        a[count++] = 4;
                    else
                        a[count++] = 9;
                }
            }
        }
    }
    if (count == 0)
        cout << "0" << endl;
    else
    {
        sort(a, a + count);
        for (int i = 0; i < count; i++)
        {
            if(a[i]<10&&i!=0)
                cout << "0" << a[i];
            else
                cout << a[i];
        }
    }
    cout << endl;
    return 0;
}