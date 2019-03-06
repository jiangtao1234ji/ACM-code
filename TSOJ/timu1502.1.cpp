#define _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>
#include <math.h>
#include <algorithm>
#include <stdlib.h>
#include <vector>
#include <map>
#include <queue>
#include <string>
#include <iostream>
#include <ctype.h>
#include <string.h>
#include <set>
#include <stack>
#include<functional>
using namespace std;
#define Size 55
#define maxn  1<<30
int dp[Size][Size];
/*
dp[i][j] 表示将i分解成不大于j的能分解的个数
dp[i][j]=dp[i][j-1]+dp[i-j][j]//因为数字可以重复  那么即使去掉了一个j 那么最大的数还有可能是j
当i-j<0 dp[i][j]=dp[i][j-1]
出口
dp(1,1)=1=dp(1,0)+dp(0,1)
dp(2,1)=1(1,1)=dp(2,0)+dp(1,1)  
所以dp(i,0)=0  dp(0,j)=1;
*/
int solve(int n, int m){
    if (dp[n][m] != -1) return dp[n][m];
    if (n == 0) {
        dp[n][m] = 1;
        return 1;
    }
    if (m == 0) {
        dp[n][m] = 0;
        return 0;
    }
    if (m > n) {
        dp[n][m]= solve(n, m-1);
        return dp[n][m];
    }

    dp[n][m]=solve(n , m-1) + solve(n-m, m);
    return dp[n][m];

}
int main(){
    int n;
    while (cin >> n){
        for (int i = 0; i <= n; i++)
            for (int j = 0; j <= n; j++)
                dp[i][j] = -1;
        cout << solve(n, n) << endl;
    }
    system("pause");
    return 0;
}
