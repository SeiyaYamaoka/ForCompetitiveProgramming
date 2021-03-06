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

using Graph = vector<vector<int>>;
// 深さ優先探索
vector<bool> seen;//見つけたらtureにする配列　
void dfs(const Graph &G, int v) {
    seen[v] = true; // v を訪問済にする

    // v から行ける各頂点 next_v について
    for (auto next_v : G[v]) { 
        if (seen[next_v]) continue; // next_v が探索済だったらスルー
        dfs(G, next_v); // 再帰的に探索
    }
}

//dfs
//s から t へ辿り着けるか
//s を始点とした DFS を実施する。
//DFS 実施後において seen 配列を見ることで、各頂点が探索されたかどうかを判定することができる
//特に seen[t] を見ることで頂点 t に到達できるかどうかを判定することができます。

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    // 頂点数と辺数
    int N, M,s,t; cin >> N >> M >> s >> t;

    // グラフ入力受取 有効グラフ
    Graph G(N);
    for (int i = 0; i < M; ++i) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
    }

    // 頂点 0 をスタートとした探索
    seen.assign(N, false); // 全頂点を「未訪問」に初期化
    dfs(G, s);

    if(seen[t])cout << "Yes" << endl; 
    else cout << "No" << endl;
    
    return 0;
}