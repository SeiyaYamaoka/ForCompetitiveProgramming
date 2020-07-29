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
    ll a,b,c;
    cin >> a >> b >> c;

    if(a % 2 != 0 || b % 2 != 0 || c % 2 != 0){
        cout << 0 << endl;
        return 0;  
    }
    if(a == b && b == c){
        cout << -1 << endl;
        return 0;
    }

    ll ans = 0;
    while(1){
        if(a % 2 != 0 || b % 2 != 0 || c % 2 != 0)break;
        ll a2 = a,b2 = b,c2 = c;
        a = (b2 + c2) / 2;
        b = (a2 + c2) / 2;
        c = (a2 + b2) / 2;
        ans++;
    }

    cout << ans << endl;

    
    return 0;
}