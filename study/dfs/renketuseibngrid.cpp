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
int h, w;
vector<vector<int>> field;

const int dx[8] = {1, 0, -1, 0, -1, 1, 1, -1};
const int dy[8] = {0, 1, 0, -1, -1, 1, -1, 1};

// 探索
void dfs(int hei, int wid) {
    field[hei][wid] = 0;

    // 八方向を探索
    for(int i = 0;i < 8;i++){
        int nh = hei + dy[i], nw = wid + dx[i];
        // 場外アウトしたり、0 だったりはスルー
        if (nh < 0 || nh >= h || nw < 0 || nw >= w) continue;
        if (field[nh][nw] == 0) continue;
        // 再帰的に探索
        dfs(nh, nw);

    }
}

//連接成分の類題　グリッド版
//八方向に移動する
//https://qiita.com/drken/items/a803d4fc4a727e02f7ba の記事だけどテストがうまくいかない
//

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    // 頂点数と辺数
        // 入力受け取り
    while (cin >> w >> h) {
        if (w == 0 || h == 0) break;
        field.assign(h, vector<int>(w, 0));
        for (int i = 0; i < h; ++i) for (int j = 0; j < w; ++j) cin >> field[i][j];

        // 探索開始
        int count = 0;
        for (int i = 0; i < h; ++i) {
            for (int j = 0; j < w; ++j) {
                if (field[i][j] == 0) continue; // 残島じゃなかったらスルー
                dfs(i, j);
                ++count;
            }
        }
        cout << count << endl;
    }
    
    return 0;
}