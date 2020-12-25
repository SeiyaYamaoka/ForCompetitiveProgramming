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
    int n,m,t;
    cin >> n >> m >> t;
    vector<pair<int,int>> ab(m);
    REP(i,m)cin >> ab[i].first >> ab[i].second;
    bool is = false;
    int max = n;
    REP(i,m){
        if(i == 0){
            n -= ab[i].first;
        }else{
            n -= (ab[i].first - ab[i - 1].second);
        }
        if(n <= 0){is = true;break;}
        n += ab[i].second - ab[i].first;
        if(n > max)n = max;
    }
    n -= t - ab[m - 1].second;
    if(n <= 0){is = true;}
    if(is){
        cout << "No" << endl;
    }else{
         cout << "Yes" << endl;
    }
    // cout << n << m << t;
    // REP(i,m)cout << ab[i].first << ab[i].second;

    
    return 0;
}