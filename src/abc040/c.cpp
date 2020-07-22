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

    ll n; cin >> n;
    vector<ll> a(n);
    REP(i,n)cin >> a[i];

    ll dp[100010];
    REP(i,100010)dp[i] = LINF;
    dp[0] = 0;

    REP(i,n){
        chmin(dp[i + 1],dp[i] + abs(a[i] - a[i + 1]));
        chmin(dp[i + 2],dp[i] + abs(a[i] - a[i + 2]));
    }

   

    cout << dp[n - 1] << endl;
    
    return 0;
}