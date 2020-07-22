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

    int n;
    cin >> n;
    vector<vector<int>> abc(n,vector<int>(3));
    REP(i,n)cin >> abc[i][0] >> abc[i][1] >> abc[i][2];

    static const int tenum =  110000;
    ll dp[tenum][3];

    REP(i,n){
        REP(j,3){
            REP(k,3){
                if(j != k)chmax(dp[i + 1][k],dp[i][j] + abc[i][k]);
            }
        }
    }
    
    ll ans = 0;
    REP(i,3)chmax(ans,dp[n][i]);
    cout << ans << endl;

    return 0;
}