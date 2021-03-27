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
#define debug(x) cout << #x << ": " << x << "\n"
#define out(x) cout << x << endl

template<class T> void debug1(T *x,int n,int m){
    for(int i = 0;i < n;i++){
        for(int j = 0;j<m;j++){
            cout << x[i][j] ;
        }cout << "\n";
    }
}

template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b; return true;} return false;}

#define MAX_N 100
#define MAX_M 100
char field[MAX_N][MAX_M];
// 10 12
// W........WW.
// .WWW.....WWW
// ....WW...WW.
// .........WW.
// .........W..
// ..W......W..
// .W.W.....WW.
// W.W.W.....W.
// .W.W......W.
// ..W.......W.
int n = 10,m = 12;

bool dfs(int i,int sum){

}

void solve(){
    cin >> n >> m;
    REP(i,n){
        REP(j,m){
            cin >> field[i][j];
        }
    }
    debug1(field,n,m);
    

}

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
 
    solve();

    return 0;
}