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

using GraphI = vector<vector<int>>; // グラフ型

struct Edge {
    int to;     // 辺の行き先
    int weight; // 辺の重み
    Edge(int t, int w) : to(t), weight(w) { }
};

using GraphE = vector<vector<Edge>>;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    //グラフ　計算機上のデータ構造について
    //隣接リスト表現 (adjacency-list representation)
    //隣接行列表現　 (adjacency-matrix representation)
    //がある。多くの場合はリストのほうが効率よくアルゴリズムが組める。
    
    //無向グラフ　有向グラフ　辺の向きを指定するかどうか

    //入力形式
    // N  M
    // a0 b0
    // a1 b1
    // ……
    // aM−1 bM−1
    int N, M; // 頂点数と辺数
    cin >> N >> M;
    GraphI GI(N); // グラフ
    for (int i = 0; i < M; ++i) {
        int a, b;
        cin >> a >> b;
        GI[a].push_back(b);

        // 無向グラフの場合は以下を追加
        // GI[b].push_back(a);
    }
    //辺に重みがある場合
    // for (int i = 0; i < M; ++i) {
    //     int from, to, weight;
    //     cin >> from >> to >> weight;
    //     G[from].push_back(Edge(to, weight));
    // }


    return 0;
}