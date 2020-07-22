#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long long LINF = 1LL << 60;
const long long LMINF = 1LL << 63;
const int INF = 1 << 30;

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


// 入力
int N;
long long W, weight[110], value[110]; // 品物の個数は 100 個なので少し余裕持たせてサイズ 110 に

// DPテーブル
long long dp[110][100100] = {0};

int main(){
    cin >> N >> W;
    for (int i = 0; i < N; ++i) cin >> weight[i] >> value[i];

    // DPループ
    for (int i = 0; i < N; ++i) {
        for (int sum_w = 0; sum_w <= W; ++sum_w) {

            // i 番目の品物を選ぶ場合
            if (sum_w - weight[i] >= 0) {
                chmax(dp[i+1][sum_w], dp[i][sum_w - weight[i]] + value[i]);
            }

            // i 番目の品物を選ばない場合
            chmax(dp[i+1][sum_w], dp[i][sum_w]);
        }
    }

    // 最適値の出力
    cout << dp[N][W] << endl;
    return 0;
}