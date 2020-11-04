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


struct Edge {
    int to;
    int w;
};
using Graph = vector<vector<Edge>>;
// 深さ優先探索
vector<int> color;  
bool dfs(const Graph &G, int v,int cul = 0) {
    color[v] = cul; 
    for (auto next_v : G[v]) {
        // 隣接頂点がすでに色確定していた場合
        if (color[next_v.to] != -1) {

        }
    }
    return true;
}

int main(){
    // 頂点数と辺数
    int N; cin >> N;

    // グラフ入力受取
    Graph G(N);
    for (int i = 0; i < N - 1; ++i) {
        int a, b, c;
        cin >> a >> b >> c;
        Edge e;
        --a;--b;
        e.to = b;
        e.w = c;
        G[a].push_back(e);
        e.to = a;
        G[b].push_back(e);
    }

    // 探索
    color.assign(N, -1);

    dfs(G,0);

    for(auto &p:color)cout << p << endl;


    return 0;
}