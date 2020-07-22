#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define REP(i,n) for(int i = 0;i < n;++i)
#define REPS(i,x) for(int i = 1;i <= (int)(x);i++)
#define RREP(i,x) for(int i=((int)(x)-1);i >= 0;i--)
#define RREPS(i,x) for(int i=((int)(x));i > 0;i--)
#define PB push_back
#define F first
#define S second
#define MP make_pair
#define ALL(obj) (obj).begin(),(obj).end()
#define debug(x) cerr << #x << ": " << x << "\n"

template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b; return true;} return false;}


const long long LINF = 1LL << 60;

int main(){

    ll dp[10010];
    REP(i,10010)dp[i] = LINF;
    dp[0] = 0;

    ll n; cin >> n;
    vector<ll> h(n);
    REP(i,n)cin >> h[i];

    REPS(i,n){
        //もらうDP
        chmin(dp[i],dp[i - 1] + abs(h[i] - h[i - 1]));
        if(i > 1)chmin(dp[i],dp[i - 2] + abs(h[i] - h[i - 2]));

        //別解　配るDP
        //chmin(dp[i + 1], dp[i] + abs(h[i] - h[i + 1]));
        //chmin(dp[i + 2], dp[i] + abs(h[i] - h[i + 2]));
    }
    cout << dp[n - 1] << endl;
    return 0;
}

//メモ化再帰
// long long rec(int i) {
//     // DP の値が更新されていたらそのままリターン
//     if (dp[i] < INF) return dp[i];

//     // 足場 0 のコストは 0
//     if (i == 0) return 0;

//     // i-1, i-2 それぞれ試す
//     long long res = INF;
//     chmin(res, rec(i-1) + abs(h[i] - h[i - 1])); // 足場 i-1 から来た場合
//     if (i > 1) chmin(res, rec(i-2) + abs(h[i] - h[i - 2])); // 足場 i-2 から来た場合

//     // 結果をメモしながら、返す
//     return dp[i] = res;
// }
