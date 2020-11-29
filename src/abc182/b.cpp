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

//inline int gcd(int a, int b) { if (a%b == 0)return (b); return (gcd(b, a%b)); }

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int n;
    cin >> n;
    vector<int> a(n);
    REP(i,n)cin >> a[i];
    int m = -1;
    int gcd = -1;
    int max = -1;
    for (auto &p : a)chmax(max, p);
    
    for(int i = 2;i <= max;i++){
        int cn =0;
        REP(j,n){
            if(a[j] % i == 0){
                cn++;
            }
        }

        if(gcd <= cn){
            m = i;
            gcd = cn;
        }
        // debug(m);
        // debug(gcd);
    }
    cout << m << endl;
    return 0;
}