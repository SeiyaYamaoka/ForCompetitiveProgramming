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



int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int n,m,c;
    cin >> n >> m >> c;
    vector<short> b(m);
    REP(i,m)cin >> b[i];
    vector<vector<short>> a(n,vector<short>(m));
    REP(i,n){
        REP(j,m){
            cin >> a[i][j];
        }
    }

    unsigned int cnt = 0;
    REP(i,n){
        int pl = 0;
        REP(j,m){
            pl += (a[i][j] * b[j]);
        }
        if(pl + c > 0)cnt++;
    }

    cout << cnt << endl;
    
    return 0;
}