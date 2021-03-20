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

template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b; return true;} return false;}

inline int gcd(int a, int b) { if (a%b == 0)return (b); return (gcd(b, a%b)); }
inline int lcm(int a, int b) { return a * b / gcd(a, b); }

vector<ll> prfac(ll n) {
	ll a = 2;
    vector<ll> v;
	while (n >= a * a) {
		if (n % a == 0) {
			//cout << a << " * ";
            v.emplace_back(a);
			n /= a;
		}
		else {
			a++;
		}
	}
	// cout << n << endl;
    v.emplace_back(n);
    return v;
}

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int a,b,w;
    cin >> a >> b >> w;
    w *= 1000;

    // int aw = (w % a == 0)? w / a : w / a + 1;
    // int bw = (w % b == 0)? w / b : w / b + 1;
    int aw = w / a;
    int bw = w / b;
    debug(a * aw);
    debug(w - (a*aw));

    debug(b * bw);
    debug(w - (b * bw));

    aw <= bw ? cout << "UNSATISFIABLE" << endl:cout << bw << " " << aw << endl;
    
    
    return 0;
}