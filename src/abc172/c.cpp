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

    ll n,m,k;
    cin >> n >> m >> k;
    vector<ll> a(n);
    vector<ll> b(m);
    REP(i,n)cin >> a[i];
    REP(i,m)cin >> b[i];

    a.emplace_back(LINF);
    b.emplace_back(LINF);

    ll dp[200010];
    REP(i,200010)dp[i] = LINF;
    dp[0] = 0;
    ll cnt = 1;
    ll minute = 0;

    while(minute < k){
        if(a[0] < b[0]){
            chmin(dp[cnt],dp[cnt - 1] + a[0]);
            minute += a[0];
            a.erase(a.begin());
        }else{
            chmin(dp[cnt],dp[cnt - 1] + b[0]);
            minute += b[0];
            b.erase(b.begin());
        }
        if(minute > k)break;
        // REP(i,a.size())debug(a[i]);
        // REP(i,b.size())debug(b[i]);

        cnt++;
        debug(minute);
    }

    REP(i,cnt + 2)debug(dp[i]);

    cout << --cnt << endl;
    return 0;
}