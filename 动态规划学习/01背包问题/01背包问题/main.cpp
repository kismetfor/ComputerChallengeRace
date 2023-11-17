#include <iostream>

using namespace std;

const int N = 1001;

int V, n, v[N], w[N];
int dp[N][N];

int main(){
    //读取输入
    cin >> V >> n;
    for(int i=1; i<=n; i++)
        cin >> v[i] >> w[i];
    
    for(int i=1; i<=n; i++)
        for(int j=1; j<=V; j++){
            dp[i][j] = dp[i-1][j];
            if(v[i]<=j) dp[i][j] = max(dp[i][j], dp[i-1][j-v[i]]+w[i]);
        }
    cout << dp[n][V] << endl;
    return 0;
}
