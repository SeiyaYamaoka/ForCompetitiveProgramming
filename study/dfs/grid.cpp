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

//dfs
//グリッドグラフの場合の s から g までたどり着けるか
//'.' は通路を表す  '#' は壁を表す (壁マスには進めない)

//グリッドグラフ形式になっても DFS の実装は大きくは変わらない  
//頂点 v は「i 行目, j 列目のマス」に対応する

// 入力
int H, W;
vector<string> field;

// 四方向への移動ベクトル
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

bool seen[510][510];//見つけたらtureにする配列　
void dfs(int he,int wi) {
    seen[he][wi] = true; // v を訪問済にする
    cout << he << " " << wi << "\n";
    for(int d = 0;d < 4;d++){
        int nh = he + dy[d];
        int nw = wi + dx[d];

        //場外、壁の場合
        if(nh < 0 || nh >= H || nw < 0 || nw >= W)continue;
        if(field[nh][nw] == '#')continue;

        //探索済みの場合
        if(seen[nh][nw])continue;

        //再帰
        dfs(nh,nw);
    }
}

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    // 頂点数と辺数
    cin >> H >> W;
    field.resize(H);
    REP(i,H){
        cin >> field[i];
    } 

    // s と g のマスを特定する
    int sh, sw, gh, gw;
    for (int ih = 0; ih < H; ++ih) {
        for (int jw = 0; jw < W; ++jw) {
            if (field[ih][jw] == 's') sh = ih, sw = jw;
            if (field[ih][jw] == 'g') gh = ih, gw = jw;
        }
    }

    // 探索開始
    memset(seen, 0, sizeof(seen)); // seen 配列全体を false に初期化
    dfs(sh,sw);

    // 結果
    if (seen[gh][gw]) cout << "Yes" << endl;
    else cout << "No" << endl;

    REP(i,10){
        REP(j,10){
            cout << seen[i][j] << " ";
        }cout << "\n";
    }
    
    return 0;
}