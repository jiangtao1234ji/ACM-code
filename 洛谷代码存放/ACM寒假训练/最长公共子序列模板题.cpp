#include<iostream>
#include<string>
#define maxn 10100

using namespace std;

int dp[maxn][maxn];
int a[maxn], b[maxn];

int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<=n; i++)
        cin>>b[i];
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(a[i] == b[i])
                dp[i][j] = dp[i-1][j-1]+1;
            else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    cout<<dp[n][n]<<endl;
    return 0;
}
