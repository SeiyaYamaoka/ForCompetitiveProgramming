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

//連結成分の個数を求める問題
//DFS or BFS で同じ連結成分に含まれる頂点を全て「探索済み」にする  ->  DFS or BFS を行った回数が連結成分の個数

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

//dfsのテンプレ
int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    // 頂点数と辺数
    int N, M; cin >> N >> M;

    // グラフ入力受取 無向グラフ
    Graph G(N);
    for (int i = 0; i < M; ++i) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    int cnt = 0;
    seen.assign(N, false); // 全頂点を「未訪問」に初期化
    for(int i = 0;i < N;++i){
        if(seen[i])continue;
        dfs(G,i);
        cnt++;
    }
    cout << cnt << endl;
    
    return 0;
}