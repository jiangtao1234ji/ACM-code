    #include <iostream>
    #include <algorithm>
    #include <string>
    #define maxn 10000

    using namespace std;

    int main()
    {
        int n;
        cin >> n;
        string s;
        cin>>s;
        int cnt = 1;
        int a =0, b=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == 'L')
            {
                if(a == 2)
                {
                    b = 0;
                    cnt++;
                }
                a = 1;
            }
            else if(s[i] == 'R')
            {
                if(a == 1)
                {
                    b = 0;
                    cnt++;
                }
                a = 2;
            }
            else if(s[i] == 'U')
            {
                if(b == 2)
                {
                    a = 0;
                    cnt++;
                }
                b = 1;
            }
            else if(s[i] == 'D')
            {
                if(b == 1)
                {
                    a = 0;
                    cnt++;
                }
                b = 2;
            }
        }
        cout << cnt << endl;
        return 0;
    }